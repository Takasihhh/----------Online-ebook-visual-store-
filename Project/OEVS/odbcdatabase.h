#ifndef ODBCDATABASE_H
#define ODBCDATABASE_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>
#include <QLabel>
struct searchStruct{
    QString bid;
    QString bname;
    QString bauthor;
    QString ISBN;
    QString description;
};

struct personStruct{
    QString bid;
    QString bname;
    QString bauthor;
    QString ISBN;
    QString description;
    QString downloadurl;
};
class  OdbcDatabase :public QObject
{
    Q_OBJECT
public:
     explicit OdbcDatabase(QObject * parent = nullptr);
signals:

protected slots:

private:
    QSqlDatabase db;//打开数据库对象
    QSqlQuery * query;//执行数据库语句

public:
    bool SignUpUser(const QString &username,const QString &account,const QString &password);
    bool CheckLogin(QString &uid,const QString &account,const QString &password);
    QList<int> GetInterface(const int& Obid,const int& stride,QList<QLabel*> &booktitle);
    bool GetBook(const int & bid,QString &bname,QString &bauthor,QString &ISBN,QString &description);
    QList<searchStruct> GetSearchResult(const QString &searchText);
    void InitPurchaseTab(const int& uid);
    QList<personStruct> GetPersonMessage(const int&uid,bool &isSuccess);
    QString GetDownloadurl(const int&uid,const int &bid);
    QString GetBookPrice(const int &uid,const int&bid);
    void SetBuy(const int&uid,const int&bid);
    bool isBuy(const int&uid,const int&bid);
};

extern OdbcDatabase * mysql;
#endif // ODBCDATABASE_H
