#include "widget.h"
#include <QApplication>
#include "loginui.h"
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // LoginUI w;
   MainWindow w;
    w.show();

    return a.exec();
}
