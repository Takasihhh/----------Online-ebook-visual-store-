#include"odbcdatabase.h"


OdbcDatabase::OdbcDatabase(QObject *parent):QObject(parent)
{
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("oevs");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("root");

    if(!db.open())
     {
        //qDebug<<"数据库连接失败";
        QMessageBox::warning(NULL,"提示","数据库连接失败");
     }
    query = new QSqlQuery;
}

bool OdbcDatabase::SignUpUser(const QString &username, const QString &account, const QString &password)
{
    QString str_01 = QString("SELECT uid from user_tab");
    query->exec(str_01);
    QString temp;
    QList<int> data;
    for(int i =0;i<query->next();++i){
    temp = query->value(0).toString();
    data.append(temp.toInt());
    }
    QString str;
    if(data.size()>0)
    str = QString("INSERT INTO user_tab VALUES('%1','%2','%3','%4')").arg(data[data.size()-1]+1).arg(username).arg(account).arg(password);
    else
    str = QString("INSERT INTO user_tab VALUES('%1','%2','%3','%4')").arg(1).arg(username).arg(account).arg(password);

    qDebug()<<str;
    query->exec(str);

}

bool OdbcDatabase::CheckLogin(QString &uid, const QString &account, const QString &password)
{
    QString str = QString("SELECT uid, ACCOUNT,PASSWORD FROM user_tab WHERE ACCOUNT='%1' AND PASSWORD = '%2'").arg(account).arg(password);
    query->clear();
    query->exec(str);
    qDebug()<<str;
    while(query->next())
    {
        uid = query->value(0).toString();
        return true;
    }
    return false;
}

QList<int> OdbcDatabase::GetInterface(const int &Obid, const int &stride, QList<QLabel *> &booktitle)
{
    QString str = QString("SELECT bid,bname FROM booklib WHERE bid>=%1 AND bid <=%2").arg(Obid).arg(Obid+stride-1);
    query->clear();
    query->exec(str);
    QList<int> data;
    int i =0;
    while(query->next())
    {
        data.append(query->value(0).toString().toInt());
        booktitle[i]->setText(query->value(1).toString());
        ++i;
    }
    qDebug()<<str;
    return  data;
}

bool OdbcDatabase::GetBook(const int &bid, QString &bname, QString &bauthor, QString &ISBN, QString &description)
{
    QString str = QString("SELECT * FROM booklib WHERE bid=%1").arg(bid);
    query->clear();
    query->exec(str);
    qDebug()<<str<<endl;
    if(query->next())
    {
        bname = query->value(1).toString();
        bauthor = query->value(2).toString();
        ISBN = query->value(3).toString();
        description = query->value(5).toString();
        return true;
    }

    return false;
}

QList<searchStruct> OdbcDatabase::GetSearchResult(const QString &searchText)
{
    QString str = QString("SELECT * FROM booklib WHERE LOCATE('%1',bname)>0").arg(searchText);
    query->clear();
    query->exec(str);
    QList<searchStruct> data;
    searchStruct tmp;
    qDebug()<<str<<endl;
    int i = 0;
    while(query->next())
    {
        tmp.bid = query->value(0).toString();
        tmp.bname = query->value(1).toString();
        tmp.bauthor = query->value(2).toString();
        tmp.ISBN = query->value(3).toString();
        tmp.description = query->value(5).toString();
        data.append(tmp);

        ++i;
    }
    return data;
}

void OdbcDatabase::InitPurchaseTab(const int& uid)
{
   QString str;
   str = QString("TRUNCATE TABLE unpc_tab");
   query->clear();
   query->exec(str);
   query->clear();
   qDebug()<<str<<endl;
   str = QString("TRUNCATE TABLE pc_tab");
   query->clear();
   query->exec(str);
   qDebug()<<str<<endl;
   str = QString("SELECT uid,booklib.bid,booklib.bname,price,sale FROM booklib LEFT OUTER JOIN pri_tab ON booklib.bid = pri_tab.bid,user_tab WHERE isbuy='否'");
   query->clear();
   query->exec(str);
   qDebug()<<str<<endl;
   QList<QString> str_01;

   while(query->next()){
        float mprice = query->value(3).toInt()*query->value(4).toFloat();
        str_01.append(QString("INSERT INTO unpc_tab VALUES(%1,%2,'%3',%4,%5,%6)").arg(uid).arg(query->value(1).toString()).arg(query->value(2).toString()).arg(mprice).arg(query->value(3).toString()).arg(query->value(4).toString()));
   }

   query->clear();
   while(!str_01.isEmpty())
   {
       query->exec(str_01[0]);
       str_01.pop_front();
   }

   str = QString("SELECT uid,booklib.bid,bname,download FROM booklib LEFT OUTER JOIN download_tab ON booklib.bid = download_tab.bid,user_tab WHERE isbuy='是'");
   query->clear();
   query->exec(str);
   qDebug()<<str<<endl;
   while(query->next()){
        str_01.append(QString("INSERT INTO pc_tab VALUES(%1,%2,'%3','%4')").arg(uid).arg(query->value(1).toString()).arg(query->value(2).toString()).arg(query->value(3).toString()));
   }

   query->clear();
   while(!str_01.isEmpty())
   {
       query->exec(str_01[0]);
       str_01.pop_front();
   }
}

QList<personStruct> OdbcDatabase::GetPersonMessage(const int &uid, bool &isSuccess)
{
    QString str = QString("FLUSH TABLE pc_tab,booklib");
    query->clear();
    query->exec(str);
    str = QString("SELECT booklib.bid,booklib.bname,bathour,ISBN,description,download FROM booklib,pc_tab WHERE uid=%1 AND booklib.bid = pc_tab.bid").arg(uid);
    query->clear();
    query->exec(str);
    int i =0;
    QList<personStruct> data;
    personStruct tmp;
    while(query->next())
    {
        tmp.bid = query->value(0).toString();
        tmp.bname = query->value(1).toString();
        tmp.bauthor = query->value(2).toString();
        tmp.ISBN = query->value(3).toString();
        tmp.description = query->value(4).toString();
        tmp.downloadurl = query->value(5).toString();
        data.append(tmp);
        ++i;
    }

    if(i>0)
        isSuccess = true;
    else {
        isSuccess = false;
    }

    return data;

}

QString OdbcDatabase::GetDownloadurl(const int &uid, const int &bid)
{
    QString str = QString("SELECT download FROM pc_tab WHERE uid='%1' AND bid = '%2'").arg(uid).arg(bid);
    query->clear();
    query->exec(str);
    if(query->next())
    {
        return query->value(0).toString();
    }
    return "";
}

QString OdbcDatabase::GetBookPrice(const int &uid, const int &bid)
{
    QString str = QString("SELECT mprice FROM unpc_tab WHERE uid = %1 AND bid = %2").arg(uid).arg(bid);
    query->clear();
    query->exec(str);
    if(query->next())
    {
        return query->value(0).toString();
    }

    return "0";
}

void OdbcDatabase::SetBuy(const int &uid, const int &bid)
{
    QString str = QString("UPDATE booklib SET isbuy = '是' WHERE bid = %1").arg(bid);
    query->clear();
    query->exec(str);
    str = QString("SELECT bname FROM booklib WHERE bid =%1").arg(bid);
    query->clear();
    query->exec(str);
    QString bname;
    if(query->next())
    {
        bname = query->value(0).toString();
    }
    query->clear();
    str = QString("SELECT download FROM download_tab WHERE bid = %1").arg(bid);
    query->exec(str);
    QString downloadurl;
    if(query->next())
    {
        downloadurl = query->value(0).toString();
    }
    query->clear();

    str = QString("INSERT INTO pc_tab VALUES(%1,%2,'%3','%4')").arg(uid).arg(bid).arg(bname).arg(downloadurl);
     query->exec(str);
    query->clear();
    str = QString("DELETE * FROM unpc_tab WHERE bid = %1").arg(bid);
    query->exec(str);
    query->clear();
}

bool OdbcDatabase::isBuy(const int &uid, const int &bid)
{
    QString str = QString("SELECT isbuy FROM booklib WHERE bid =%1").arg(bid);
    query->clear();
    query->exec(str);
    if(query->next())
    {
        if(query->value(0).toString() == "是")
        {
            return true;
        }
    }

    return false;
}






