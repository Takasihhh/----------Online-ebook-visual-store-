#include "vice_interface.h"
#include "ui_vice_interface.h"
#include <QMessageBox>
#include "main_interface.h"
#include <QDesktopServices>
vice_interface::vice_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vice_interface),
    headerBar(new QtMaterialAppBar)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    //this->resize(1280,720);
    InitUI();
}

vice_interface::~vice_interface()
{
    delete ui;
}

void vice_interface::CloseWindow()
{
    this->close();
}

void vice_interface::MinisizeWindow()
{
    this->showMinimized();
}

void vice_interface::OpenViewWnd()
{
    ViewWnd *vWnd = new ViewWnd;
    //this->close();
    vWnd->setWindowModality(Qt::ApplicationModal);
    vWnd->show();
}

void vice_interface::UpdateBook(QListWidgetItem *item)
{
   currentIndex = ui->listWidget->currentRow()-1;
   UpdatePage();
}

void vice_interface::Openurl()
{

    QDesktopServices::openUrl(QUrl(res[currentIndex].downloadurl.toLatin1()));
}



void vice_interface::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        isDrag  =true;
        mouse_start_point = event->globalPos();
        window_start_point = this->frameGeometry().topLeft();
    }
}

void vice_interface::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag){
        QPoint moveDistance = event->globalPos()-mouse_start_point;
        this->move(window_start_point + moveDistance);
    }
}

void vice_interface::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton)
        isDrag = false;
}

void vice_interface::InitUI()
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

    connect(ui->viewWnd,SIGNAL(clicked(bool)),this,SLOT(OpenViewWnd()));
    connect(close_btn,SIGNAL(clicked(bool)),this,SLOT(CloseWindow()));
    connect(minisize_btn,SIGNAL(clicked(bool)),this,SLOT(MinisizeWindow()));
}

void vice_interface::UpdatePage()
{
    QString ipath = QString(":/Img/BOOK_IMG/%1.jpg").arg(res[currentIndex].bid);
    QIcon icon(ipath);

    ui->book_Img->setIcon(icon);
    ui->bname_lab->setText("书名："+res[currentIndex].bname);
    ui->bauthor_lab->setText("作者："+res[currentIndex].bauthor);
    ui->ISBN_lab->setText("ISBN："+res[currentIndex].ISBN);
    ui->textEdit->setText(res[currentIndex].description);
    ui->dow_btn->disconnect();
    connect(ui->dow_btn,SIGNAL(clicked(bool)),this,SLOT(Openurl()));
}

void vice_interface::SetWnd(const int &uid)
{
    bool issucess = false;
    res =  mysql->GetPersonMessage(uid,issucess);
    if(!issucess)
    {
        QMessageBox::warning(NULL,"提示","您还没有书");
        main_interface * mwnd = new main_interface;
        mwnd->show();
        this->close();
        return;
    }
    for(int i =0 ;i<res.size();++i)
    {
      QListWidgetItem * listtmp = new QListWidgetItem;
      listtmp->setText(res[i].bname);
      listtmp->setToolTip(res[i].bid);
      ui->listWidget->addItem(listtmp);
    }
    connect(ui->listWidget,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(UpdateBook(QListWidgetItem*)));
    currentIndex = 0;
    UpdatePage();
}
