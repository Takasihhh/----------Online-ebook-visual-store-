/********************************************************************************
** Form generated from reading UI file 'main_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_INTERFACE_H
#define UI_MAIN_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_interface
{
public:
    QGroupBox *function;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_pi;
    QPushButton *btn_set;
    QPushButton *btn_clt;
    QPushButton *btn_his;
    QGroupBox *bookdiaplay;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *book6;
    QSpacerItem *verticalSpacer;
    QToolButton *book3;
    QToolButton *book1;
    QToolButton *book5;
    QToolButton *book2;
    QToolButton *book4;
    QLabel *bt6;
    QLabel *bt5;
    QLabel *bt3;
    QLabel *bt1;
    QLabel *bt2;
    QLabel *bt4;
    QGroupBox *search;
    QHBoxLayout *horizontalLayout;
    QLineEdit *LE_search;
    QToolButton *btn_search;
    QTreeWidget *booklistshow;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *Header;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *toolLayout;
    QToolButton *lastpage_btn;
    QToolButton *nextpage_btn;

    void setupUi(QWidget *main_interface)
    {
        if (main_interface->objectName().isEmpty())
            main_interface->setObjectName(QStringLiteral("main_interface"));
        main_interface->resize(1000, 600);
        main_interface->setTabletTracking(false);
        function = new QGroupBox(main_interface);
        function->setObjectName(QStringLiteral("function"));
        function->setGeometry(QRect(880, 200, 117, 211));
        verticalLayout = new QVBoxLayout(function);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btn_pi = new QPushButton(function);
        btn_pi->setObjectName(QStringLiteral("btn_pi"));

        verticalLayout->addWidget(btn_pi);

        btn_set = new QPushButton(function);
        btn_set->setObjectName(QStringLiteral("btn_set"));

        verticalLayout->addWidget(btn_set);

        btn_clt = new QPushButton(function);
        btn_clt->setObjectName(QStringLiteral("btn_clt"));

        verticalLayout->addWidget(btn_clt);

        btn_his = new QPushButton(function);
        btn_his->setObjectName(QStringLiteral("btn_his"));

        verticalLayout->addWidget(btn_his);

        bookdiaplay = new QGroupBox(main_interface);
        bookdiaplay->setObjectName(QStringLiteral("bookdiaplay"));
        bookdiaplay->setGeometry(QRect(320, 140, 531, 411));
        gridLayout = new QGridLayout(bookdiaplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        book6 = new QToolButton(bookdiaplay);
        book6->setObjectName(QStringLiteral("book6"));
        book6->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/book6.png"), QSize(), QIcon::Normal, QIcon::Off);
        book6->setIcon(icon);
        book6->setIconSize(QSize(120, 150));

        gridLayout->addWidget(book6, 4, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        book3 = new QToolButton(bookdiaplay);
        book3->setObjectName(QStringLiteral("book3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/book3.png"), QSize(), QIcon::Normal, QIcon::Off);
        book3->setIcon(icon1);
        book3->setIconSize(QSize(120, 150));

        gridLayout->addWidget(book3, 1, 4, 1, 1);

        book1 = new QToolButton(bookdiaplay);
        book1->setObjectName(QStringLiteral("book1"));
        book1->setAcceptDrops(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/book1.png"), QSize(), QIcon::Normal, QIcon::Off);
        book1->setIcon(icon2);
        book1->setIconSize(QSize(120, 150));

        gridLayout->addWidget(book1, 1, 0, 1, 1);

        book5 = new QToolButton(bookdiaplay);
        book5->setObjectName(QStringLiteral("book5"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/book5.png"), QSize(), QIcon::Normal, QIcon::Off);
        book5->setIcon(icon3);
        book5->setIconSize(QSize(120, 150));

        gridLayout->addWidget(book5, 4, 2, 1, 1);

        book2 = new QToolButton(bookdiaplay);
        book2->setObjectName(QStringLiteral("book2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/book2.png"), QSize(), QIcon::Normal, QIcon::Off);
        book2->setIcon(icon4);
        book2->setIconSize(QSize(120, 150));

        gridLayout->addWidget(book2, 1, 2, 1, 1);

        book4 = new QToolButton(bookdiaplay);
        book4->setObjectName(QStringLiteral("book4"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/book4.png"), QSize(), QIcon::Normal, QIcon::Off);
        book4->setIcon(icon5);
        book4->setIconSize(QSize(120, 150));

        gridLayout->addWidget(book4, 4, 0, 1, 1);

        bt6 = new QLabel(bookdiaplay);
        bt6->setObjectName(QStringLiteral("bt6"));

        gridLayout->addWidget(bt6, 5, 0, 1, 1);

        bt5 = new QLabel(bookdiaplay);
        bt5->setObjectName(QStringLiteral("bt5"));

        gridLayout->addWidget(bt5, 5, 2, 1, 1);

        bt3 = new QLabel(bookdiaplay);
        bt3->setObjectName(QStringLiteral("bt3"));

        gridLayout->addWidget(bt3, 5, 4, 1, 1);

        bt1 = new QLabel(bookdiaplay);
        bt1->setObjectName(QStringLiteral("bt1"));

        gridLayout->addWidget(bt1, 2, 0, 1, 1);

        bt2 = new QLabel(bookdiaplay);
        bt2->setObjectName(QStringLiteral("bt2"));

        gridLayout->addWidget(bt2, 2, 2, 1, 1);

        bt4 = new QLabel(bookdiaplay);
        bt4->setObjectName(QStringLiteral("bt4"));

        gridLayout->addWidget(bt4, 2, 4, 1, 1);

        book4->raise();
        book3->raise();
        book1->raise();
        book5->raise();
        book2->raise();
        book6->raise();
        bt6->raise();
        bt5->raise();
        bt3->raise();
        bt1->raise();
        bt2->raise();
        bt4->raise();
        search = new QGroupBox(main_interface);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(330, 40, 501, 91));
        horizontalLayout = new QHBoxLayout(search);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        LE_search = new QLineEdit(search);
        LE_search->setObjectName(QStringLiteral("LE_search"));

        horizontalLayout->addWidget(LE_search);

        btn_search = new QToolButton(search);
        btn_search->setObjectName(QStringLiteral("btn_search"));

        horizontalLayout->addWidget(btn_search);

        booklistshow = new QTreeWidget(main_interface);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        new QTreeWidgetItem(__qtreewidgetitem4);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        new QTreeWidgetItem(__qtreewidgetitem5);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        new QTreeWidgetItem(__qtreewidgetitem6);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        new QTreeWidgetItem(__qtreewidgetitem7);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem8);
        new QTreeWidgetItem(__qtreewidgetitem8);
        new QTreeWidgetItem(__qtreewidgetitem8);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(booklistshow);
        new QTreeWidgetItem(__qtreewidgetitem9);
        new QTreeWidgetItem(__qtreewidgetitem9);
        new QTreeWidgetItem(__qtreewidgetitem9);
        booklistshow->setObjectName(QStringLiteral("booklistshow"));
        booklistshow->setGeometry(QRect(0, 30, 231, 571));
        verticalLayoutWidget = new QWidget(main_interface);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 0, 1001, 31));
        Header = new QVBoxLayout(verticalLayoutWidget);
        Header->setObjectName(QStringLiteral("Header"));
        Header->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(main_interface);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-1, -1, 1001, 31));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(850, 0, 151, 31));
        toolLayout = new QHBoxLayout(horizontalLayoutWidget);
        toolLayout->setObjectName(QStringLiteral("toolLayout"));
        toolLayout->setContentsMargins(0, 0, 0, 0);
        lastpage_btn = new QToolButton(main_interface);
        lastpage_btn->setObjectName(QStringLiteral("lastpage_btn"));
        lastpage_btn->setGeometry(QRect(440, 560, 61, 22));
        nextpage_btn = new QToolButton(main_interface);
        nextpage_btn->setObjectName(QStringLiteral("nextpage_btn"));
        nextpage_btn->setGeometry(QRect(640, 560, 61, 22));

        retranslateUi(main_interface);

        QMetaObject::connectSlotsByName(main_interface);
    } // setupUi

    void retranslateUi(QWidget *main_interface)
    {
        main_interface->setWindowTitle(QApplication::translate("main_interface", "Form", Q_NULLPTR));
        function->setTitle(QApplication::translate("main_interface", "function", Q_NULLPTR));
        btn_pi->setText(QApplication::translate("main_interface", "\344\270\252\344\272\272\344\271\246\345\272\223", Q_NULLPTR));
        btn_set->setText(QApplication::translate("main_interface", "\350\256\276\347\275\256", Q_NULLPTR));
        btn_clt->setText(QApplication::translate("main_interface", "\346\210\221\347\232\204\346\224\266\350\227\217", Q_NULLPTR));
        btn_his->setText(QApplication::translate("main_interface", "\345\216\206\345\217\262\350\256\260\345\275\225", Q_NULLPTR));
        bookdiaplay->setTitle(QApplication::translate("main_interface", "bookdisplay", Q_NULLPTR));
        book6->setText(QApplication::translate("main_interface", "...", Q_NULLPTR));
        book3->setText(QApplication::translate("main_interface", "...", Q_NULLPTR));
        book1->setText(QApplication::translate("main_interface", "...", Q_NULLPTR));
        book5->setText(QApplication::translate("main_interface", "...", Q_NULLPTR));
        book2->setText(QApplication::translate("main_interface", "...", Q_NULLPTR));
        book4->setText(QApplication::translate("main_interface", "...", Q_NULLPTR));
        bt6->setText(QApplication::translate("main_interface", "TextLabel", Q_NULLPTR));
        bt5->setText(QApplication::translate("main_interface", "TextLabel", Q_NULLPTR));
        bt3->setText(QApplication::translate("main_interface", "TextLabel", Q_NULLPTR));
        bt1->setText(QApplication::translate("main_interface", "TextLabel", Q_NULLPTR));
        bt2->setText(QApplication::translate("main_interface", "TextLabel", Q_NULLPTR));
        bt4->setText(QApplication::translate("main_interface", "TextLabel", Q_NULLPTR));
        search->setTitle(QApplication::translate("main_interface", "search", Q_NULLPTR));
        btn_search->setText(QApplication::translate("main_interface", "\360\237\224\215", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = booklistshow->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("main_interface", "booklist", Q_NULLPTR));

        const bool __sortingEnabled = booklistshow->isSortingEnabled();
        booklistshow->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = booklistshow->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("main_interface", "\345\260\217\350\257\264\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("main_interface", "\346\226\207\345\255\246\345\260\217\350\257\264", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("main_interface", "\350\250\200\346\203\205\345\260\217\350\257\264", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("main_interface", "\347\247\221\345\271\273\345\260\217\350\257\264", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(0, QApplication::translate("main_interface", "\346\202\254\347\226\221\345\260\217\350\257\264", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem6->setText(0, QApplication::translate("main_interface", "\345\216\206\345\217\262\345\260\217\350\257\264", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = booklistshow->topLevelItem(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("main_interface", "\351\235\236\345\260\217\350\257\264\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(0, QApplication::translate("main_interface", "\344\272\272\346\226\207\347\244\276\347\247\221\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(0, QApplication::translate("main_interface", "\346\225\231\350\202\262\350\200\203\350\257\225\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem7->child(2);
        ___qtreewidgetitem10->setText(0, QApplication::translate("main_interface", "\350\211\272\346\234\257\350\256\276\350\256\241\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem7->child(3);
        ___qtreewidgetitem11->setText(0, QApplication::translate("main_interface", "\345\201\245\345\272\267\345\205\273\347\224\237\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem7->child(4);
        ___qtreewidgetitem12->setText(0, QApplication::translate("main_interface", "\346\227\205\346\270\270\345\234\260\347\220\206\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem13 = booklistshow->topLevelItem(2);
        ___qtreewidgetitem13->setText(0, QApplication::translate("main_interface", "\345\204\277\347\253\245\350\257\273\347\211\251\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem13->child(0);
        ___qtreewidgetitem14->setText(0, QApplication::translate("main_interface", "\347\273\230\346\234\254", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem13->child(1);
        ___qtreewidgetitem15->setText(0, QApplication::translate("main_interface", "\347\253\245\350\257\235", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem13->child(2);
        ___qtreewidgetitem16->setText(0, QApplication::translate("main_interface", "\345\212\250\346\274\253", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem13->child(3);
        ___qtreewidgetitem17->setText(0, QApplication::translate("main_interface", "\347\247\221\346\231\256", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem13->child(4);
        ___qtreewidgetitem18->setText(0, QApplication::translate("main_interface", "\346\210\220\351\225\277\346\225\231\350\202\262", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem19 = booklistshow->topLevelItem(3);
        ___qtreewidgetitem19->setText(0, QApplication::translate("main_interface", "\347\247\221\345\255\246\347\247\221\346\212\200\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem19->child(0);
        ___qtreewidgetitem20->setText(0, QApplication::translate("main_interface", "\350\207\252\347\204\266\347\247\221\345\255\246", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem19->child(1);
        ___qtreewidgetitem21->setText(0, QApplication::translate("main_interface", "\345\267\245\347\250\213\347\247\221\346\212\200", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem19->child(2);
        ___qtreewidgetitem22->setText(0, QApplication::translate("main_interface", "\345\214\273\345\255\246\345\201\245\345\272\267", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem23 = ___qtreewidgetitem19->child(3);
        ___qtreewidgetitem23->setText(0, QApplication::translate("main_interface", "\350\256\241\347\256\227\346\234\272\347\275\221\350\267\257", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem24 = booklistshow->topLevelItem(4);
        ___qtreewidgetitem24->setText(0, QApplication::translate("main_interface", "\347\273\217\346\265\216\347\256\241\347\220\206\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem25 = ___qtreewidgetitem24->child(0);
        ___qtreewidgetitem25->setText(0, QApplication::translate("main_interface", "\350\220\245\351\224\200\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem26 = ___qtreewidgetitem24->child(1);
        ___qtreewidgetitem26->setText(0, QApplication::translate("main_interface", "\350\264\242\345\212\241\344\274\232\350\256\241", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem27 = ___qtreewidgetitem24->child(2);
        ___qtreewidgetitem27->setText(0, QApplication::translate("main_interface", "\346\212\225\350\265\204\351\207\221\350\236\215", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem28 = ___qtreewidgetitem24->child(3);
        ___qtreewidgetitem28->setText(0, QApplication::translate("main_interface", "\344\274\201\344\270\232\347\256\241\347\220\206", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem29 = booklistshow->topLevelItem(5);
        ___qtreewidgetitem29->setText(0, QApplication::translate("main_interface", "\346\226\207\345\214\226\350\211\272\346\234\257\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem30 = ___qtreewidgetitem29->child(0);
        ___qtreewidgetitem30->setText(0, QApplication::translate("main_interface", "\345\216\206\345\217\262\346\226\207\345\214\226", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem31 = ___qtreewidgetitem29->child(1);
        ___qtreewidgetitem31->setText(0, QApplication::translate("main_interface", "\351\237\263\344\271\220\350\210\236\350\271\210", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem32 = ___qtreewidgetitem29->child(2);
        ___qtreewidgetitem32->setText(0, QApplication::translate("main_interface", "\347\276\216\346\234\257\344\271\246\346\263\225", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem33 = ___qtreewidgetitem29->child(3);
        ___qtreewidgetitem33->setText(0, QApplication::translate("main_interface", "\347\224\265\345\275\261\346\210\217\345\211\247", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem34 = booklistshow->topLevelItem(6);
        ___qtreewidgetitem34->setText(0, QApplication::translate("main_interface", "\345\206\233\344\272\213\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem35 = ___qtreewidgetitem34->child(0);
        ___qtreewidgetitem35->setText(0, QApplication::translate("main_interface", "\345\206\233\344\272\213\345\216\206\345\217\262", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem36 = ___qtreewidgetitem34->child(1);
        ___qtreewidgetitem36->setText(0, QApplication::translate("main_interface", "\345\206\233\344\272\213\347\220\206\350\256\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem37 = ___qtreewidgetitem34->child(2);
        ___qtreewidgetitem37->setText(0, QApplication::translate("main_interface", "\345\206\233\344\272\213\347\247\221\346\212\200", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem38 = ___qtreewidgetitem34->child(3);
        ___qtreewidgetitem38->setText(0, QApplication::translate("main_interface", "\345\206\233\344\272\213\345\260\217\350\257\264", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem39 = booklistshow->topLevelItem(7);
        ___qtreewidgetitem39->setText(0, QApplication::translate("main_interface", "\345\223\262\345\255\246\345\256\227\346\225\231\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem40 = ___qtreewidgetitem39->child(0);
        ___qtreewidgetitem40->setText(0, QApplication::translate("main_interface", "\345\223\262\345\255\246\346\200\235\346\203\263", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem41 = ___qtreewidgetitem39->child(1);
        ___qtreewidgetitem41->setText(0, QApplication::translate("main_interface", "\345\256\227\346\225\231\346\226\207\345\214\226", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem42 = ___qtreewidgetitem39->child(2);
        ___qtreewidgetitem42->setText(0, QApplication::translate("main_interface", "\345\277\203\347\201\265\347\224\237\346\264\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem43 = booklistshow->topLevelItem(8);
        ___qtreewidgetitem43->setText(0, QApplication::translate("main_interface", "\346\226\260\351\227\273\344\274\240\346\222\255\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem44 = ___qtreewidgetitem43->child(0);
        ___qtreewidgetitem44->setText(0, QApplication::translate("main_interface", "\346\226\260\351\227\273\346\227\266\344\272\213", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem45 = ___qtreewidgetitem43->child(1);
        ___qtreewidgetitem45->setText(0, QApplication::translate("main_interface", "\344\274\240\345\252\222\347\240\224\347\251\266", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem46 = ___qtreewidgetitem43->child(2);
        ___qtreewidgetitem46->setText(0, QApplication::translate("main_interface", "\345\271\277\345\221\212\350\220\245\351\224\200", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem47 = booklistshow->topLevelItem(9);
        ___qtreewidgetitem47->setText(0, QApplication::translate("main_interface", "\346\263\225\345\276\213\346\224\277\346\262\273\347\261\273", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem48 = ___qtreewidgetitem47->child(0);
        ___qtreewidgetitem48->setText(0, QApplication::translate("main_interface", "\346\224\277\346\262\273\347\220\206\350\256\272", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem49 = ___qtreewidgetitem47->child(1);
        ___qtreewidgetitem49->setText(0, QApplication::translate("main_interface", "\346\263\225\345\276\213\345\256\236\345\212\241", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem50 = ___qtreewidgetitem47->child(2);
        ___qtreewidgetitem50->setText(0, QApplication::translate("main_interface", "\345\205\254\345\205\261\347\256\241\347\220\206", Q_NULLPTR));
        booklistshow->setSortingEnabled(__sortingEnabled);

        lastpage_btn->setText(QApplication::translate("main_interface", "\344\270\212\344\270\200\351\241\265", Q_NULLPTR));
        nextpage_btn->setText(QApplication::translate("main_interface", "\344\270\213\344\270\200\351\241\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class main_interface: public Ui_main_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_INTERFACE_H
