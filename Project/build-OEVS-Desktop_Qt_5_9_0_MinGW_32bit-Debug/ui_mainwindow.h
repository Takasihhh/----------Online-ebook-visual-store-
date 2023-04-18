/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *BookListLayout;
    QWidget *searchWidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *SearchLaout;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFrame *frame_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *IndexLayout;
    QWidget *gridLayoutWidget_2;
    QGridLayout *MainFrameLayout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setLayoutDirection(Qt::RightToLeft);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1281, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, -7, 1281, 91));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1291, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(1150, 0, 0, 35);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(0, 80, 1280, 641));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayoutWidget_2 = new QWidget(frame_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 271, 641));
        BookListLayout = new QVBoxLayout(verticalLayoutWidget_2);
        BookListLayout->setSpacing(2);
        BookListLayout->setObjectName(QStringLiteral("BookListLayout"));
        BookListLayout->setContentsMargins(0, 0, 0, 200);
        searchWidget = new QWidget(frame_2);
        searchWidget->setObjectName(QStringLiteral("searchWidget"));
        searchWidget->setGeometry(QRect(270, 0, 1011, 131));
        horizontalLayoutWidget_2 = new QWidget(searchWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 20, 931, 80));
        SearchLaout = new QHBoxLayout(horizontalLayoutWidget_2);
        SearchLaout->setObjectName(QStringLiteral("SearchLaout"));
        SearchLaout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget = new QWidget(frame_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(270, 130, 1011, 521));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(gridLayoutWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_3 = new QWidget(frame_3);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 450, 941, 51));
        IndexLayout = new QHBoxLayout(horizontalLayoutWidget_3);
        IndexLayout->setObjectName(QStringLiteral("IndexLayout"));
        IndexLayout->setContentsMargins(0, 0, 0, 0);
        gridLayoutWidget_2 = new QWidget(frame_3);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(40, 30, 931, 391));
        MainFrameLayout = new QGridLayout(gridLayoutWidget_2);
        MainFrameLayout->setObjectName(QStringLiteral("MainFrameLayout"));
        MainFrameLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(frame_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
