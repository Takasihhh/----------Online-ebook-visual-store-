/********************************************************************************
** Form generated from reading UI file 'bookbutton.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKBUTTON_H
#define UI_BOOKBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookButton
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *BookButton)
    {
        if (BookButton->objectName().isEmpty())
            BookButton->setObjectName(QStringLiteral("BookButton"));
        BookButton->resize(150, 200);
        verticalLayoutWidget = new QWidget(BookButton);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 151, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(BookButton);

        QMetaObject::connectSlotsByName(BookButton);
    } // setupUi

    void retranslateUi(QWidget *BookButton)
    {
        BookButton->setWindowTitle(QApplication::translate("BookButton", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookButton: public Ui_BookButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKBUTTON_H
