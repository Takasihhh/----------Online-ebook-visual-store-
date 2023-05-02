#ifndef ODBCDATABASE_H
#define ODBCDATABASE_H
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QMessageBox>

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
};

extern OdbcDatabase * mysql;
#endif // ODBCDATABASE_H
