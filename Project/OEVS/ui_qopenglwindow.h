/********************************************************************************
** Form generated from reading UI file 'qopenglwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QOPENGLWINDOW_H
#define UI_QOPENGLWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QopenGlWindow
{
public:

    void setupUi(QWidget *QopenGlWindow)
    {
        if (QopenGlWindow->objectName().isEmpty())
            QopenGlWindow->setObjectName(QStringLiteral("QopenGlWindow"));
        QopenGlWindow->resize(400, 300);

        retranslateUi(QopenGlWindow);

        QMetaObject::connectSlotsByName(QopenGlWindow);
    } // setupUi

    void retranslateUi(QWidget *QopenGlWindow)
    {
        QopenGlWindow->setWindowTitle(QApplication::translate("QopenGlWindow", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QopenGlWindow: public Ui_QopenGlWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QOPENGLWINDOW_H
