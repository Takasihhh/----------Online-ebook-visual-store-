#include "main_interface.h"
#include "ui_main_interface.h"

main_interface::main_interface(QWidget *parent) :
    QWidget(parent),
<<<<<<< HEAD
    ui(new Ui::main_interface)
{
    ui->setupUi(this);

=======
    ui(new Ui::main_interface),
     headerBar(new QtMaterialAppBar)
{
    ui->setupUi(this);
    //去窗口边框
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    //this->resize(1280,720);
    InitUI();
>>>>>>> shizhonyu
}

main_interface::~main_interface()
{
    delete ui;
}
<<<<<<< HEAD
=======

void main_interface::CloseWindow()
{
    this->close();
}

void main_interface::MinisizeWindow()
{
    this->showMinimized();
}



void main_interface::InitUI()
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
}



void main_interface::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        isDrag  =true;
        mouse_start_point = event->globalPos();
        window_start_point = this->frameGeometry().topLeft();
    }

}

void main_interface::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag){
        QPoint moveDistance = event->globalPos()-mouse_start_point;
        this->move(window_start_point + moveDistance);
    }
}

void main_interface::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton)
        isDrag = false;
}
>>>>>>> shizhonyu
