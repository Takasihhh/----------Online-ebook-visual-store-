#include "widget.h"
#include <QApplication>
#include "loginui.h"
#include "odbcdatabase.h"
OdbcDatabase * mysql;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mysql = new OdbcDatabase;
    LoginUI w;
    w.show();

    return a.exec();
}
