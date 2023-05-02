/********************************************************************************
** Form generated from reading UI file 'booklistslot.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKLISTSLOT_H
#define UI_BOOKLISTSLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookListSlot
{
public:
    QFrame *frame;
    QLabel *BookIcon;
    QLabel *BookName;

    void setupUi(QWidget *BookListSlot)
    {
        if (BookListSlot->objectName().isEmpty())
            BookListSlot->setObjectName(QStringLiteral("BookListSlot"));
        BookListSlot->resize(300, 100);
        frame = new QFrame(BookListSlot);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 300, 100));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        BookIcon = new QLabel(frame);
        BookIcon->setObjectName(QStringLiteral("BookIcon"));
        BookIcon->setGeometry(QRect(0, 0, 61, 101));
        BookName = new QLabel(frame);
        BookName->setObjectName(QStringLiteral("BookName"));
        BookName->setGeometry(QRect(70, 20, 231, 51));

        retranslateUi(BookListSlot);

        QMetaObject::connectSlotsByName(BookListSlot);
    } // setupUi

    void retranslateUi(QWidget *BookListSlot)
    {
        BookListSlot->setWindowTitle(QApplication::translate("BookListSlot", "Form", Q_NULLPTR));
        BookIcon->setText(QApplication::translate("BookListSlot", "TextLabel", Q_NULLPTR));
        BookName->setText(QApplication::translate("BookListSlot", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BookListSlot: public Ui_BookListSlot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKLISTSLOT_H
