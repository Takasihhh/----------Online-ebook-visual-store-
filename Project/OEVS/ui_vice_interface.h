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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vice_interface
{
public:
    QPushButton *viewWnd;
    QTreeWidget *treeWidget;
    QToolButton *toolButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *textEdit;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Header;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *toolLayout;

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
        treeWidget = new QTreeWidget(vice_interface);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(20, 70, 201, 581));
        toolButton = new QToolButton(vice_interface);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(240, 70, 171, 201));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/book1.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(170, 200));
        pushButton_2 = new QPushButton(vice_interface);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 280, 71, 31));
        pushButton_3 = new QPushButton(vice_interface);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 280, 71, 31));
        groupBox = new QGroupBox(vice_interface);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(430, 70, 311, 201));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        textEdit = new QTextEdit(vice_interface);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(240, 330, 741, 301));
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

        retranslateUi(vice_interface);

        QMetaObject::connectSlotsByName(vice_interface);
    } // setupUi

    void retranslateUi(QWidget *vice_interface)
    {
        vice_interface->setWindowTitle(QApplication::translate("vice_interface", "Form", Q_NULLPTR));
        viewWnd->setText(QApplication::translate("vice_interface", "\345\217\257\350\247\206\345\214\226\346\225\210\346\236\234\345\261\225\347\244\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("vice_interface", "\344\271\246\345\272\223", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("vice_interface", "book1", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QApplication::translate("vice_interface", "book2", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QApplication::translate("vice_interface", "book3", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem4->setText(0, QApplication::translate("vice_interface", "book4", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(4);
        ___qtreewidgetitem5->setText(0, QApplication::translate("vice_interface", "book5", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(5);
        ___qtreewidgetitem6->setText(0, QApplication::translate("vice_interface", "book6", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(6);
        ___qtreewidgetitem7->setText(0, QApplication::translate("vice_interface", "book7", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(7);
        ___qtreewidgetitem8->setText(0, QApplication::translate("vice_interface", "book8", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

        toolButton->setText(QApplication::translate("vice_interface", "...", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("vice_interface", "\344\270\213\350\275\275", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("vice_interface", "\346\224\266\350\227\217", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("vice_interface", "shuxing", Q_NULLPTR));
        label->setText(QApplication::translate("vice_interface", "\344\271\246\345\220\215\357\274\232\345\270\203\351\262\201\345\205\213\346\236\227\346\234\211\346\243\265\346\240\221", Q_NULLPTR));
        label_2->setText(QApplication::translate("vice_interface", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("vice_interface", "\345\207\272\347\211\210\347\244\276\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("vice_interface", "\347\261\273\345\236\213\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("vice_interface", "\345\205\263\351\224\256\350\257\215\357\274\232", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("vice_interface", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:28px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\347\256\200\344\273\213\357\274\232\343\200\212\345\270\203\351\262\201\345\205\213\346\236\227\346\234\211\346\243\265\346\240\221\343\200\213\346\230\257\347\276\216\345\233\275\344\275\234\345\256\266\350\264\235\350\222\202\302\267\345\217\262\345\257\206\346\226\257\345\210\233\344\275\234\347\232\204\351\225\277\347\257\207"
                        "\345\260\217\350\257\264\357\274\214\351\246\226\346\254\241\345\207\272\347\211\210\344\272\2161943\345\271\264\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:28px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\350\257\245\345\260\217\350\257\264\350\256\262\350\277\260\347\224\237\346\264\273\345\234\250\347\276\216\345\233\275\350\264\253\346\260\221\345\214\272\345\270\203\351\262\201\345\205\213\346\236\227\347\232\204\345\260\217\345\245\263\345\255\251\345\274\227\345\205\260\350\245\277\357\274\214\345\234\250\346\210\220\351\225\277\350\277\207\347\250\213\344\270\255\351\245\261\347\273\217\345\256\266\345\272\255\347\232\204\344\270\215\345\271\270\357\274\214\345\220\214\345\255\246\347\232\204\346\255\247\350\247"
                        "\206\345\222\214\347\244\276\344\274\232\347\232\204\344\270\215\345\205\254\343\200\202\345\245\271\344\273\216\350\264\253\345\233\260\347\232\204\345\256\266\345\272\255\344\270\255\350\211\260\351\232\276\345\234\260\346\210\220\351\225\277\357\274\214\345\207\255\345\200\237\345\235\232\351\237\247\344\270\215\346\213\224\347\232\204\346\204\217\345\277\227\346\234\235\346\242\246\346\203\263\345\245\213\350\265\267\347\233\264\350\277\275\357\274\214\347\273\210\344\272\216\350\265\260\345\207\272\350\264\253\346\260\221\347\252\237\357\274\214\350\200\203\344\270\212\345\244\247\345\255\246\343\200\202</span><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333;\">\302\240\350\257\245\345\260\217\350\257\264\347\252\201\345\207\272\345\271\263\345\207\241\344\272\272\345\212\252\345\212\233\350\277\275\346\261\202\350\207\252\345\267\261\347\232\204\346\242\246\346\203\263\357\274\214\345\235"
                        "\246\347\204\266\351\235\242\345\257\271\347\224\237\346\264\273\347\232\204\350\213\246\351\232\276\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:28px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">11\345\262\201\347\232\204\345\245\263\345\255\251\345\274\227\345\205\260\350\245\277\347\224\237\346\264\273\345\234\250\345\270\203\351\262\201\345\205\213\346\236\227\347\251\267\344\272\272\345\214\272\357\274\214\345\222\214\345\205\266\344\273\226\345\270\203\351\262\201\345\205\213\346\236\227\345\260\217\345\255\251\344\270\200\346\240\267\357\274\214\345\245\271\345\222\214\345\274\237\345\274\237\345\260\274\351\233\267\344\274\232\345\234\250\345\244\226\351\235\242\346\215\241\344\272\233\345\270\203\345\244\264\343"
                        "\200\201\347\272\270\345\274\240\343\200\201\351\207\221\345\261\236\343\200\201\346\251\241\350\203\266\347\255\211\347\240\264\347\203\202\357\274\214\346\257\217\351\200\242\345\221\250\346\234\253\357\274\214\345\245\271\345\260\261\345\222\214\345\274\237\345\274\237\344\270\200\350\265\267\345\216\273\345\236\203\345\234\276\347\253\231\345\215\226\346\216\211\344\273\226\344\273\254\346\215\241\346\235\245\347\232\204\345\236\203\345\234\276\357\274\214\346\215\242\345\276\227\345\207\240\346\236\232\347\241\254\345\270\201\343\200\202\345\245\271\347\206\237\346\202\211\346\257\217\344\270\200\347\247\215\345\272\237\345\223\201\347\232\204\344\273\267\346\240\274\357\274\214\344\271\237\347\237\245\351\201\223\345\246\202\344\275\225\344\271\260\345\210\260\345\273\211\344\273\267\347\232\204\345\217\221\351\234\211\351\235\242\345\214\205\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px;"
                        " background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\344\270\200\345\277\203\346\203\263\346\210\220\344\270\272\344\275\234\345\256\266\347\232\204\345\274\227\345\205\260\350\245\277\345\244\251\347\224\237\345\226\234\346\254\242\350\257\273\344\271\246\357\274\214\351\200\256\345\210\260\344\273\200\344\271\210\350\257\273\344\273\200\344\271\210\357\274\232\347\273\217\345\205\270\344\275\234\345\223\201\345\245\271\350\257\273\357\274\214\345\236\203\345\234\276\344\275\234\345\223\201\345\245\271\344\271\237\350\257\273\357\274\214\350\277\236\346\227\266\345\210\273\350\241\250\345\222\214\351\243\237\345\223\201\345\272\227\347\232\204\344\273\267\347\233\256\350\241\250\345\245\271\351\203\275\350\257\273\343\200\202\346\257\217\345\221\250\345\274\227\345\205\260\350\245\277\351\203\275\344\274\232\350\257\267\346\261\202\345\233"
                        "\276\344\271\246\347\256\241\347\220\206\345\221\230\347\273\231\345\245\271\346\216\250\350\215\220\344\270\200\346\234\254\345\245\275\344\271\246\357\274\214\345\246\202\346\236\234\345\233\276\344\271\246\347\256\241\347\220\206\345\221\230\350\203\275\345\276\256\347\254\221\344\270\200\344\270\213\357\274\214\346\210\226\346\230\257\350\257\264\345\217\245\345\217\213\345\226\204\347\232\204\350\257\235\357\274\214\345\274\227\345\205\260\350\245\277\345\260\261\345\276\210\345\274\200\345\277\203\344\272\206\343\200\202\345\245\271\347\210\261\345\233\276\344\271\246\351\246\206\357\274\214\344\271\237\345\270\214\346\234\233\345\233\276\344\271\246\351\246\206\347\232\204\347\256\241\347\220\206\344\272\272\345\221\230\350\203\275\350\256\251\345\245\271\351\222\246\344\275\251\357\274\214\345\217\257\346\203\234\345\233\276\344\271\246\347\256\241\347\220\206\345\221\230\346\200\273\346\203\263\347\235\200\345\210\253\347\232\204\344\272\213\357\274\214\344\270\215\345\244\247\345\226\234\346\254\242\345"
                        "\260\217\345\255\251\345\204\277\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\345\274\227\345\205\260\350\245\277\344\270\200\347\233\264\346\203\263\346\213\245\346\234\211\344\270\200\346\234\254\344\271\246\357\274\214\345\256\236\345\234\250\344\270\215\350\241\214\346\212\204\345\206\231\344\270\200\346\234\254\344\271\237\350\241\214\343\200\202\345\245\271\345\217\221\350\252\223\351\225\277\345\244\247\345\220\216\345\212\252\345\212\233\345\267\245\344\275\234\357\274\214\345\245\275\345\245\275\345\255\230\351\222\261\357\274\214\345\260\206\350\207\252\345\267\261\345\226\234\346\254\242\347\232\204\344\271\246\345\205\250\351\203\275\344\271\260\344\270\213\357"
                        "\274\214\350\277\231\344\270\252\346\203\263\346\263\225\345\257\271\344\272\216\345\245\271\346\235\245\350\257\264\346\230\257\344\270\252\345\267\250\345\244\247\345\256\211\346\205\260\343\200\202\346\257\217\344\270\252\345\221\250\346\234\253\357\274\214\345\245\271\351\203\275\344\274\232\346\213\277\347\235\200\344\270\200\346\234\254\344\271\246\357\274\214\347\213\254\350\207\252\345\234\250\345\256\266\357\274\214\350\276\271\350\257\273\344\271\246\350\276\271\345\277\253\344\271\220\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\345\274\227\345\205\260\350\245\277\347\232\204\344\271\246\350\257\273\345\256\214\347\232\204\346\227\266\345\200\231\357\274\214\347"
                        "\210\270\347\210\270\344\271\237\345\233\236\346\235\245\344\272\206\357\274\214\345\274\227\345\205\260\350\245\277\344\270\200\350\276\271\345\270\256\347\210\270\347\210\270\347\206\250\350\241\243\346\234\215\357\274\214\344\270\200\350\276\271\345\222\214\347\210\270\347\210\270\350\201\212\345\244\251\343\200\202\345\274\227\345\205\260\350\245\277\347\232\204\347\210\270\347\210\270\346\230\257\344\270\252\344\270\200\346\227\240\346\230\257\345\244\204\347\232\204\346\255\214\346\211\213\357\274\214\347\273\217\345\270\270\345\226\235\345\276\227\351\206\211\351\206\272\351\206\272\347\232\204\357\274\214\344\275\206\345\245\271\350\277\230\346\230\257\345\276\210\345\226\234\346\254\242\347\210\270\347\210\270\343\200\202\345\234\250\345\245\271\347\232\204\347\234\274\351\207\214\357\274\214\347\210\270\347\210\270\345\270\205\346\260\224\346\275\207\346\264\222\357\274\214\346\257\224\345\210\253\344\272\272\347\232\204\347\210\270\347\210\270\351\203\275\350\246\201\344\274\230\351\233\205\357\274\214"
                        "\351\243\216\345\272\246\347\277\251\347\277\251\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\345\274\227\345\205\260\350\245\277\347\232\204\345\246\210\345\246\210\351\235\240\346\223\246\346\264\227\345\234\260\346\235\277\345\222\214\345\275\223\347\234\213\351\227\250\344\272\272\347\273\264\346\214\201\345\256\266\347\224\250\357\274\214\345\245\271\346\230\257\345\205\250\345\256\266\347\232\204\347\273\217\346\265\216\346\224\257\346\237\261\343\200\202\345\245\271\345\270\214\346\234\233\350\207\252\345\267\261\347\232\204\345\255\251\345\255\220\350\203\275\347\224\237\346\264\273\345\276\227\345\245\275\344\270\200\347\202\271\345\204\277\357\274\214\345\245\271"
                        "\346\242\246\346\203\263\347\235\200\350\203\275\344\276\233\345\205\273\344\270\244\344\270\252\345\255\251\345\255\220\344\270\212\345\244\247\345\255\246\343\200\202\345\245\271\347\232\204\345\244\226\347\245\226\346\257\215\346\262\241\346\234\211\346\226\207\345\214\226\357\274\214\350\277\236\345\255\227\351\203\275\344\270\215\350\257\206\357\274\214\345\215\264\345\273\272\350\256\256\345\274\227\345\205\260\350\245\277\347\232\204\345\246\210\345\246\210\347\273\231\350\207\252\345\267\261\347\232\204\345\255\251\345\255\220\350\257\273\343\200\212\345\234\243\347\273\217\343\200\213\357\274\214\350\257\273\350\216\216\345\243\253\346\257\224\344\272\232\357\274\214\350\256\262\350\277\260\346\260\221\351\227\264\346\225\205\344\272\213\345\222\214\347\253\245\350\257\235\357\274\214\345\245\275\350\256\251\345\255\251\345\255\220\350\231\275\347\204\266\345\244\204\344\272\216\345\233\260\345\242\203\345\275\223\344\270\255\357\274\214\344\271\237\344\270\215\350\207\263\344\272\216\346\262\211\346\262"
                        "\246\343\200\202\345\274\227\345\205\260\350\245\277\345\247\220\345\274\237\345\234\250\347\211\251\350\264\250\344\270\212\345\207\240\344\271\216\344\270\200\346\227\240\346\211\200\346\234\211\357\274\214\345\215\264\346\204\217\345\244\226\345\234\260\346\213\245\346\234\211\344\272\206\345\267\250\345\244\247\347\232\204\347\262\276\347\245\236\350\264\242\345\257\214\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\345\274\227\345\205\260\350\245\277\350\267\237\347\210\270\347\210\270\344\272\262\357\274\214\350\267\237\345\246\210\345\246\210\347\226\217\350\277\234\357\274\214\344\275\206\346\234\200\344\272\206\350\247\243\345\245\263\345\204\277\347\232\204\357\274"
                        "\214\345\215\264\346\201\260\346\201\260\346\230\257\350\277\231\344\275\215\346\257\215\344\272\262\343\200\202\345\234\250\347\224\237\344\272\247\347\254\254\344\270\211\344\270\252\345\255\251\345\255\220\345\207\240\344\271\216\350\246\201\346\255\273\346\216\211\347\232\204\346\227\266\345\200\231\357\274\214\346\257\215\344\272\262\345\220\220\351\234\262\344\272\206\345\277\203\345\243\260\357\274\214\350\257\264\345\204\277\345\255\220\346\234\254\346\235\245\344\270\215\345\226\234\346\254\242\350\257\273\344\271\246\357\274\214\345\246\202\346\236\234\345\201\234\344\273\226\347\232\204\345\255\246\357\274\214\344\273\226\346\260\270\350\277\234\351\203\275\344\270\215\344\274\232\345\206\215\345\233\236\345\216\273\357\274\233\350\200\214\345\274\227\345\205\260\350\245\277\344\270\215\344\270\200\346\240\267\357\274\214\345\245\271\344\274\232\346\213\274\357\274\214\344\274\232\346\226\227\357\274\214\345\245\271\350\277\230\344\274\232\345\233\236\345\216\273\347\232\204\357\274\214\345\260\261\345"
                        "\246\202\345\220\214\345\244\252\345\271\263\346\242\257\351\202\243\351\207\214\347\232\204\351\202\243\346\243\265\345\244\251\345\240\202\346\240\221\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\345\274\227\345\205\260\350\245\277\345\234\250\350\211\260\350\276\233\347\232\204\347\224\237\346\264\273\344\270\255\345\223\201\345\221\263\347\235\200\346\210\220\351\225\277\347\232\204\347\247\215\347\247\215\346\227\240\345\245\210\357\274\232\345\256\266\345\242\203\347\232\204\350\264\253\347\251\267\343\200\201\345\220\214\345\255\246\347\232\204\346\255\247\350\247\206\343\200\201\347\244\276\344\274\232\347\232\204\344\270\215\345\205\254\342\200\246\342\200\246\347"
                        "\204\266\350\200\214\345\245\271\345\247\213\347\273\210\345\203\217\351\202\243\346\243\265\351\225\277\345\234\250\346\260\264\346\263\245\345\234\260\351\207\214\347\232\204\346\240\221\357\274\214\345\245\213\345\212\233\346\210\220\351\225\277\357\274\214\345\235\232\351\237\247\344\270\215\346\213\224\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><span style=\" font-family:'Helvetica Neue,Helvetica,Arial,PingFang SC,Hiragino Sans GB,Microsoft YaHei,WenQuanYi Micro Hei,sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\345\274\227\345\205\260\350\245\277\345\270\246\347\235\200\350\207\252\345\267\261\347\232\204\346\242\246\346\203\263\357\274\214\344\273\216\344\271\246\344\270\255\345\246\202\351\245\245\344\274\274\346\270\264\345\234\260\346\261\262\345\217\226\347\237\245\350\257\206\343\200\202\345\207\240\347\273\217\345\221\250\346"
                        "\212\230\357\274\214\345\245\271\347\273\210\344\272\216\345\276\227\344\273\245\350\277\233\345\205\245\345\244\247\345\255\246\347\232\204\346\240\241\351\227\250\357\274\214\347\246\273\345\274\200\344\272\206\347\206\237\346\202\211\347\232\204\346\225\205\344\271\241\343\200\202</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class vice_interface: public Ui_vice_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VICE_INTERFACE_H
