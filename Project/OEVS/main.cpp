#include "widget.h"
#include <QApplication>
#include "loginui.h"
#include "mainwindow.h"
#include "viewwnd.h"
#include "odbcdatabase.h"
#include "signupwidget.h"
OdbcDatabase * mysql;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mysql = new OdbcDatabase;
    LoginUI w;
   //MainWindow w;
    //QopenGLWindow w;
    //ViewWnd w;

    //SignUpWidget w;
    w.show();

    return a.exec();
}
