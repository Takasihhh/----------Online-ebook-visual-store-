/********************************************************************************
** Form generated from reading UI file 'registered.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERED_H
#define UI_REGISTERED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registered
{
public:
    QPushButton *pBt_ok;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLineEdit *LE_age;
    QLineEdit *LE_pw;
    QLineEdit *LE_rpw;
    QLineEdit *LE_id;
    QLabel *label_age;
    QLabel *label_id;
    QLabel *label_pw;
    QLabel *label_rpw;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_sex;
    QRadioButton *rbt_man;
    QRadioButton *rbt_woman;

    void setupUi(QWidget *registered)
    {
        if (registered->objectName().isEmpty())
            registered->setObjectName(QStringLiteral("registered"));
        registered->resize(550, 420);
        registered->setMinimumSize(QSize(550, 420));
        registered->setMaximumSize(QSize(550, 420));
        pBt_ok = new QPushButton(registered);
        pBt_ok->setObjectName(QStringLiteral("pBt_ok"));
        pBt_ok->setGeometry(QRect(140, 360, 93, 28));
        pushButton_2 = new QPushButton(registered);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 360, 93, 28));
        groupBox_2 = new QGroupBox(registered);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(120, 0, 251, 341));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        LE_age = new QLineEdit(groupBox_2);
        LE_age->setObjectName(QStringLiteral("LE_age"));

        gridLayout->addWidget(LE_age, 12, 0, 1, 1);

        LE_pw = new QLineEdit(groupBox_2);
        LE_pw->setObjectName(QStringLiteral("LE_pw"));
        LE_pw->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(LE_pw, 7, 0, 1, 1);

        LE_rpw = new QLineEdit(groupBox_2);
        LE_rpw->setObjectName(QStringLiteral("LE_rpw"));
        LE_rpw->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(LE_rpw, 4, 0, 1, 1);

        LE_id = new QLineEdit(groupBox_2);
        LE_id->setObjectName(QStringLiteral("LE_id"));

        gridLayout->addWidget(LE_id, 10, 0, 1, 1);

        label_age = new QLabel(groupBox_2);
        label_age->setObjectName(QStringLiteral("label_age"));

        gridLayout->addWidget(label_age, 11, 0, 1, 1);

        label_id = new QLabel(groupBox_2);
        label_id->setObjectName(QStringLiteral("label_id"));

        gridLayout->addWidget(label_id, 3, 0, 1, 1);

        label_pw = new QLabel(groupBox_2);
        label_pw->setObjectName(QStringLiteral("label_pw"));

        gridLayout->addWidget(label_pw, 6, 0, 1, 1);

        label_rpw = new QLabel(groupBox_2);
        label_rpw->setObjectName(QStringLiteral("label_rpw"));

        gridLayout->addWidget(label_rpw, 9, 0, 1, 1);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_sex = new QLabel(groupBox);
        label_sex->setObjectName(QStringLiteral("label_sex"));

        horizontalLayout->addWidget(label_sex);

        rbt_man = new QRadioButton(groupBox);
        rbt_man->setObjectName(QStringLiteral("rbt_man"));

        horizontalLayout->addWidget(rbt_man);

        rbt_woman = new QRadioButton(groupBox);
        rbt_woman->setObjectName(QStringLiteral("rbt_woman"));

        horizontalLayout->addWidget(rbt_woman);


        gridLayout->addWidget(groupBox, 13, 0, 1, 1);


        retranslateUi(registered);

        QMetaObject::connectSlotsByName(registered);
    } // setupUi

    void retranslateUi(QWidget *registered)
    {
        registered->setWindowTitle(QApplication::translate("registered", "Form", Q_NULLPTR));
        pBt_ok->setText(QApplication::translate("registered", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("registered", "\345\217\226\346\266\210", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("registered", "ri", Q_NULLPTR));
        label_age->setText(QApplication::translate("registered", "\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_id->setText(QApplication::translate("registered", "ID\357\274\232", Q_NULLPTR));
        label_pw->setText(QApplication::translate("registered", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_rpw->setText(QApplication::translate("registered", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("registered", "sex", Q_NULLPTR));
        label_sex->setText(QApplication::translate("registered", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        rbt_man->setText(QApplication::translate("registered", "\347\224\267", Q_NULLPTR));
        rbt_woman->setText(QApplication::translate("registered", "\345\245\263", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class registered: public Ui_registered {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERED_H
