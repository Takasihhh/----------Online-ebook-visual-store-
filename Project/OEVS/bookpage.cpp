#include "bookpage.h"
#include "ui_bookpage.h"
#include <QMessageBox>
#include "main_interface.h"
#include "odbcdatabase.h"
#include "buywnd.h"
BookPage::BookPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookPage),
    headerBar(new QtMaterialAppBar)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    //this->resize(1280,720);
    InitUI();
}

BookPage::~BookPage()
{
    delete ui;
}

void BookPage::CloseWindow()
{
    this->close();
}

void BookPage::MinisizeWindow()
{
    this->showMinimized();
}

void BookPage::BackMWnd()
{
    main_interface * mWnd = new main_interface;
    mWnd->show();
    this->close();

}

void BookPage::OpenBuyWnd()
{
    BuyWnd * bwnd = new BuyWnd;
    bwnd->SetWnd(currentUid,currentBid);
    bwnd->show();
    this->close();
}


void BookPage::InitUI()
{
   headerBar->setSizeIncrement(1280,100);
   ui->Header->addWidget(headerBar);
    QToolButton * close_btn = new QToolButton(this);
  //  close_btn->setGeometry(1260,5,30,30);
    close_btn->setIconSize(QSize(30,30));
    close_btn->setIcon(QIcon(":/Img/Image/Close.png"));


    QToolButton * minisize_btn = new QToolButton(this);
  // minisize_btn->setGeometry(590,5,30,30);
    minisize_btn->setIcon(QIcon(":/Img/Image/Minisize.png"));
    minisize_btn->setIconSize(QSize(30,30));

    ui->toolLayout->addWidget(minisize_btn);
    ui->toolLayout->addWidget(close_btn);

    connect(close_btn,SIGNAL(clicked(bool)),this,SLOT(CloseWindow()));
    connect(minisize_btn,SIGNAL(clicked(bool)),this,SLOT(MinisizeWindow()));
    connect(ui->back_btn,SIGNAL(clicked(bool)),this,SLOT(BackMWnd()));
}

void BookPage::ReadPage(const int &bid)
{
    QString  bname;
    QString  bauthor;
    QString ISBN;
    QString description;
   bool isget = mysql->GetBook(bid,bname,bauthor,ISBN,description);
    if(isget)
    {
        QString imgpath = QString(":/Img/BOOK_IMG/%1.jpg").arg(bid);
        QIcon image(imgpath);
        ui->bookImg->setIcon(image);
        ui->bookname_txt->setText("书名："+bname);
        ui->author_txt->setText("作者："+bauthor);
        qDebug()<<ISBN<<endl;
        ui->ISBN_txt->setText("ISBN号："+ISBN);
        ui->textEdit->setText(description);
        connect(ui->Buy_btn,SIGNAL(clicked(bool)),this,SLOT(OpenBuyWnd()));
    }
    else {
    QMessageBox::warning(NULL,"警告","找不到书");
    this->close();
    }
}

void BookPage::SetWnd(const int &uid)
{
    currentUid = uid;
}

void BookPage::SetBid(const int &bid)
{
    ReadPage(bid);
    currentBid = bid;
}

void BookPage::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        isDrag  =true;
        mouse_start_point = event->globalPos();
        window_start_point = this->frameGeometry().topLeft();
    }
}

void BookPage::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag){
        QPoint moveDistance = event->globalPos()-mouse_start_point;
        this->move(window_start_point + moveDistance);
    }
}

void BookPage::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton)
        isDrag = false;
}

