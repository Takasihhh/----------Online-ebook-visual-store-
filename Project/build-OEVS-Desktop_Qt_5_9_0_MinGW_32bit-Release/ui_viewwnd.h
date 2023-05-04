/********************************************************************************
** Form generated from reading UI file 'viewwnd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWWND_H
#define UI_VIEWWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qopenglwindow.h>

QT_BEGIN_NAMESPACE

class Ui_ViewWnd
{
public:
    QWidget *centralwidget;
    QopenGLWindow *openGLWidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ViewWnd)
    {
        if (ViewWnd->objectName().isEmpty())
            ViewWnd->setObjectName(QStringLiteral("ViewWnd"));
        ViewWnd->resize(800, 600);
        centralwidget = new QWidget(ViewWnd);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        openGLWidget = new QopenGLWindow(centralwidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(150, 100, 300, 200));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 240, 72, 15));
        ViewWnd->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ViewWnd);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        ViewWnd->setMenuBar(menubar);
        statusbar = new QStatusBar(ViewWnd);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ViewWnd->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());

        retranslateUi(ViewWnd);

        QMetaObject::connectSlotsByName(ViewWnd);
    } // setupUi

    void retranslateUi(QMainWindow *ViewWnd)
    {
        ViewWnd->setWindowTitle(QApplication::translate("ViewWnd", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("ViewWnd", "TextLabel", Q_NULLPTR));
        menu->setTitle(QApplication::translate("ViewWnd", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("ViewWnd", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewWnd: public Ui_ViewWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWWND_H
