<<<<<<< HEAD
#include "mainwindow.h"
#include "main_interface.h"
#include "registered.h"
#include "vice_interface.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w1;
    main_interface w2;
    registered w3;
    vice_interface w4;

    w1.show();
    w2.show();
    w3.show();
    w4.show();

    return a.exec();
}
=======
#include "mainwindow.h"
#include "main_interface.h"
#include "registered.h"
#include "vice_interface.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w1;
    main_interface w2;
    registered w3;
    vice_interface w4;

    w1.show();
    w2.show();
    w3.show();
    w4.show();

    return a.exec();
}
>>>>>>> 26bd0e02415206b1c82c494c3ee192ee4b559c65
