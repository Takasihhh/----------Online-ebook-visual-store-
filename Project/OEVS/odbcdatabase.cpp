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






