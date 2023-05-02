#include "widget.h"
#include <QApplication>
#include "loginui.h"
#include "mainwindow.h"
#include "viewwnd.h"
#include "odbcdatabase.h"
#include "signupwidget.h"
#include "main_interface.h"
#include "vice_interface.h"
OdbcDatabase * mysql;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mysql = new OdbcDatabase;
    //LoginUI w;
   //MainWindow w;
    //QopenGLWindow w;
    //ViewWnd w;
   //main_interface w;
    //SignUpWidget w;
    vice_interface w;
    w.show();

    return a.exec();
}
