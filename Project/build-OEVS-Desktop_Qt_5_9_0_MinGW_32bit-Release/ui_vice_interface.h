/********************************************************************************
** Form generated from reading UI file 'vice_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VICE_INTERFACE_H
#define UI_VICE_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vice_interface
{
public:
    QPushButton *viewWnd;
    QToolButton *book_Img;
    QPushButton *dow_btn;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *bname_lab;
    QLabel *bauthor_lab;
    QLabel *ISBN_lab;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Header;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *toolLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *vice_interface)
    {
        if (vice_interface->objectName().isEmpty())
            vice_interface->setObjectName(QStringLiteral("vice_interface"));
        vice_interface->resize(1000, 691);
        viewWnd = new QPushButton(vice_interface);
        viewWnd->setObjectName(QStringLiteral("viewWnd"));
        viewWnd->setGeometry(QRect(770, 150, 181, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewWnd->sizePolicy().hasHeightForWidth());
        viewWnd->setSizePolicy(sizePolicy);
        book_Img = new QToolButton(vice_interface);
        book_Img->setObjectName(QStringLiteral("book_Img"));
        book_Img->setEnabled(false);
        book_Img->setGeometry(QRect(240, 70, 171, 201));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/book1.png"), QSize(), QIcon::Normal, QIcon::Off);
        book_Img->setIcon(icon);
        book_Img->setIconSize(QSize(170, 200));
        dow_btn = new QPushButton(vice_interface);
        dow_btn->setObjectName(QStringLiteral("dow_btn"));
        dow_btn->setGeometry(QRect(340, 280, 71, 31));
        pushButton_3 = new QPushButton(vice_interface);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 280, 71, 31));
        groupBox = new QGroupBox(vice_interface);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(430, 70, 311, 201));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        bname_lab = new QLabel(groupBox);
        bname_lab->setObjectName(QStringLiteral("bname_lab"));

        verticalLayout->addWidget(bname_lab);

        bauthor_lab = new QLabel(groupBox);
        bauthor_lab->setObjectName(QStringLiteral("bauthor_lab"));

        verticalLayout->addWidget(bauthor_lab);

        ISBN_lab = new QLabel(groupBox);
        ISBN_lab->setObjectName(QStringLiteral("ISBN_lab"));

        verticalLayout->addWidget(ISBN_lab);

        textEdit = new QTextEdit(vice_interface);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(240, 330, 741, 301));
        textEdit->setReadOnly(true);
        verticalLayoutWidget = new QWidget(vice_interface);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1001, 51));
        Header = new QVBoxLayout(verticalLayoutWidget);
        Header->setObjectName(QStringLiteral("Header"));
        Header->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(vice_interface);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, -1, 1001, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(790, 0, 211, 51));
        toolLayout = new QHBoxLayout(horizontalLayoutWidget);
        toolLayout->setObjectName(QStringLiteral("toolLayout"));
        toolLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(vice_interface);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignCenter);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 100, 211, 541));

        retranslateUi(vice_interface);

        QMetaObject::connectSlotsByName(vice_interface);
    } // setupUi

    void retranslateUi(QWidget *vice_interface)
    {
        vice_interface->setWindowTitle(QApplication::translate("vice_interface", "Form", Q_NULLPTR));
        viewWnd->setText(QApplication::translate("vice_interface", "\345\217\257\350\247\206\345\214\226\346\225\210\346\236\234\345\261\225\347\244\272", Q_NULLPTR));
        book_Img->setText(QApplication::translate("vice_interface", "...", Q_NULLPTR));
        dow_btn->setText(QApplication::translate("vice_interface", "\344\270\213\350\275\275", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("vice_interface", "\346\224\266\350\227\217", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("vice_interface", "shuxing", Q_NULLPTR));
        bname_lab->setText(QApplication::translate("vice_interface", "\344\271\246\345\220\215\357\274\232", Q_NULLPTR));
        bauthor_lab->setText(QApplication::translate("vice_interface", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        ISBN_lab->setText(QApplication::translate("vice_interface", "ISBN:", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("vice_interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" background-color:#ffffff;\">\347\256\200\344\273\213\357\274\232</span></p></body></html>", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("vice_interface", "\344\271\246\345\272\223", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class vice_interface: public Ui_vice_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VICE_INTERFACE_H
