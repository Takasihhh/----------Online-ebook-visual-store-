/********************************************************************************
** Form generated from reading UI file 'buywnd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYWND_H
#define UI_BUYWND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuyWnd
{
public:
    QLabel *label;
    QLabel *label_2;
    QToolButton *buy;
    QToolButton *cancel;
    QLabel *label_3;
    QLabel *Price_lab;

    void setupUi(QWidget *BuyWnd)
    {
        if (BuyWnd->objectName().isEmpty())
            BuyWnd->setObjectName(QStringLiteral("BuyWnd"));
        BuyWnd->resize(726, 644);
        label = new QLabel(BuyWnd);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 50, 141, 20));
        label_2 = new QLabel(BuyWnd);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 90, 461, 451));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Img/Image/buy.png")));
        label_2->setScaledContents(true);
        buy = new QToolButton(BuyWnd);
        buy->setObjectName(QStringLiteral("buy"));
        buy->setGeometry(QRect(90, 570, 121, 41));
        cancel = new QToolButton(BuyWnd);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setGeometry(QRect(430, 570, 121, 41));
        label_3 = new QLabel(BuyWnd);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 50, 61, 20));
        Price_lab = new QLabel(BuyWnd);
        Price_lab->setObjectName(QStringLiteral("Price_lab"));
        Price_lab->setGeometry(QRect(170, 50, 61, 20));

        retranslateUi(BuyWnd);

        QMetaObject::connectSlotsByName(BuyWnd);
    } // setupUi

    void retranslateUi(QWidget *BuyWnd)
    {
        BuyWnd->setWindowTitle(QApplication::translate("BuyWnd", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("BuyWnd", "\350\257\267\350\207\252\350\247\211\346\267\273\345\212\240\345\276\256\344\277\241\350\264\255\344\271\260", Q_NULLPTR));
        label_2->setText(QString());
        buy->setText(QApplication::translate("BuyWnd", "\350\264\255\344\271\260\345\256\214\346\257\225", Q_NULLPTR));
        cancel->setText(QApplication::translate("BuyWnd", "\347\256\227\344\272\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("BuyWnd", "\344\273\267\346\240\274\344\270\272\357\274\232", Q_NULLPTR));
        Price_lab->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BuyWnd: public Ui_BuyWnd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYWND_H
