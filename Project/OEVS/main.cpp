#include "widget.h"
#include <QApplication>
#include "loginui.h"
#include "mainwindow.h"
#include "viewwnd.h"
#include "odbcdatabase.h"
#include "signupwidget.h"
<<<<<<< HEAD
=======
#include "main_interface.h"
#include "vice_interface.h"
>>>>>>> shizhonyu
OdbcDatabase * mysql;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mysql = new OdbcDatabase;
<<<<<<< HEAD
    LoginUI w;
   //MainWindow w;
    //QopenGLWindow w;
    //ViewWnd w;

    //SignUpWidget w;
=======
    //LoginUI w;
   //MainWindow w;
    //QopenGLWindow w;
    //ViewWnd w;
   //main_interface w;
    //SignUpWidget w;
    vice_interface w;
>>>>>>> shizhonyu
    w.show();

    return a.exec();
}
