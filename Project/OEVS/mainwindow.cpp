#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QVBoxLayout"
#include "qtoolbutton.h"
#include "booklistslot.h"
#include "qtmaterialtextfield.h"
#include "QLabel.h"
#include "bookbutton.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
 headerBar(new QtMaterialAppBar)
{
//    ui->setupUi(this);
    //去窗口边框
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->resize(1280,720);
    //canvas->setStyleSheet("QWidget { background: white; }");
   // isDrag = false;
    //this->setStyleSheet("QWidget {background : white;}");
    InitMainWnd();

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::CloseWindow()
{
    this->close();
}

void MainWindow::MinisizeWindow()
{
    this->showMinimized();
}

void MainWindow::InitMainWnd()
{

    headerBar->setSizeIncrement(1280,100);

    QToolButton * close_btn = new QToolButton(this);
  //  close_btn->setGeometry(1260,5,30,30);
    close_btn->setIconSize(QSize(30,30));
    close_btn->setIcon(QIcon(":/new/prefix1/Close.png"));


    QToolButton * minisize_btn = new QToolButton(this);
  // minisize_btn->setGeometry(590,5,30,30);
    minisize_btn->setIcon(QIcon(":/new/prefix1/Minisize.png"));
    minisize_btn->setIconSize(QSize(30,30));
    ui->setupUi(this);

   ui->verticalLayout->addWidget(headerBar);
    ui->horizontalLayout->addWidget(close_btn);
    ui->horizontalLayout->addWidget(minisize_btn);
    close_btn->raise();
    minisize_btn->raise();
    headerBar->lower();


    InitBookList();
    InitSearchFrame();
    InitMainFrame();
    InitIndexList();
    connect(close_btn,SIGNAL(clicked(bool)),this,SLOT(CloseWindow()));
    connect(minisize_btn,SIGNAL(clicked(bool)),this,SLOT(MinisizeWindow()));
}

void MainWindow::InitBookList()
{
    BookListSlot * slot_01 = new BookListSlot;
    BookListSlot * slot_02 = new BookListSlot;
    BookListSlot * slot_03 = new BookListSlot;
    QPixmap * dasKapital = new QPixmap(":/new/prefix1/Das_Kapital.jpg");
    QString  dasKapital_text = QString("资本论");
    slot_01->UpdateSlot(*dasKapital,dasKapital_text);
    QPixmap * maoist = new QPixmap(":/new/prefix1/maoist.jpg");
    QString  maoist_text = QString("毛泽东选集");
    slot_02->UpdateSlot(*maoist,maoist_text);
    QPixmap * priigent = new QPixmap(":/new/prefix1/Privateigenthums.jpg");
    QString  priigent_text = QString("家庭，私有制和国家的起源");
    slot_03->UpdateSlot(*priigent,priigent_text);
    ui->BookListLayout->addWidget(slot_01);
    ui->BookListLayout->addWidget(slot_02);
    ui->BookListLayout->addWidget(slot_03);
}

void MainWindow::InitSearchFrame()
{
    QLabel * searchIcon = new QLabel;
    searchIcon->setPixmap(QPixmap(":/new/prefix1/Search_icon.png").scaled(QSize(25,25)));

    QtMaterialTextField * searchTextField=  new QtMaterialTextField;

    ui->SearchLaout->addWidget(searchTextField);
    ui->SearchLaout->addWidget(searchIcon);
}

void MainWindow::InitMainFrame() //初始化组件
{
    BookButton * first_book = new BookButton;
    QPixmap * firstB_Icon = new QPixmap(":/new/prefix1/Das_Kapital.jpg");
    QString text_01 =  QString("资本论");
    first_book->SetButton(*firstB_Icon,text_01);
    BookButton * second_book = new BookButton;
    QPixmap * secondB_Icon = new QPixmap(":/new/prefix1/maoist.jpg");
     QString text_02 =  QString("毛泽东选集");
    second_book->SetButton(*secondB_Icon,text_02);
    ui->MainFrameLayout->addWidget(first_book);
    ui->MainFrameLayout->addWidget(second_book);
}

void MainWindow::InitIndexList()
{
    QToolButton * firstIndex = new QToolButton;
    QToolButton * secondIndex = new QToolButton;
    firstIndex->setText(QString("1"));
    secondIndex->setText(QString("2"));
    ui->IndexLayout->addWidget(secondIndex);
    ui->IndexLayout->addWidget(firstIndex);

}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        isDrag  =true;
        mouse_start_point = event->globalPos();
        window_start_point = this->frameGeometry().topLeft();
    }

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag){
        QPoint moveDistance = event->globalPos()-mouse_start_point;
        this->move(window_start_point + moveDistance);

    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton)
        isDrag = false;
}
