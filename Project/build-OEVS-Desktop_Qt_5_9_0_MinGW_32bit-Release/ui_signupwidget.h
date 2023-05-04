/********************************************************************************
** Form generated from reading UI file 'signupwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWIDGET_H
#define UI_SIGNUPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpWidget
{
public:

    void setupUi(QWidget *SignUpWidget)
    {
        if (SignUpWidget->objectName().isEmpty())
            SignUpWidget->setObjectName(QStringLiteral("SignUpWidget"));
        SignUpWidget->resize(400, 300);

        retranslateUi(SignUpWidget);

        QMetaObject::connectSlotsByName(SignUpWidget);
    } // setupUi

    void retranslateUi(QWidget *SignUpWidget)
    {
        SignUpWidget->setWindowTitle(QApplication::translate("SignUpWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignUpWidget: public Ui_SignUpWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWIDGET_H
