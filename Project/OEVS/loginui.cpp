#include "loginui.h"
#include "ui_loginui.h"
#include <QVBoxLayout>
#include<qcolordialog.h>
#include"qlabel.h"
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include<qtmaterialtextfield.h>
#include<qtmaterialcheckbox.h>
#include "qcheckbox.h"
#include "qmovie.h"
#include <qtmaterialappbar.h>
#include "qtoolbutton.h"
#include "mainwindow.h"

//#include "qabstractbutton.h"
using namespace Material;

LoginUI::LoginUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginUI)
{

    ui->setupUi(this);
    //去窗口边框
        setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->resize(650,550);


    InitUI();



}


void LoginUI::InitUI(){

    QLabel *mian_label = new QLabel(this);
    mian_label->setGeometry(0,0,650,150);
    QMovie * movie = new QMovie(":/new/prefix1/Bg_gif.gif");
    //设置动态图大小
   // QWidget m_si = new QWidget;
    //m_si.setWidth(431);
    //m_si.setHeight(151);
    movie->setScaledSize(QSize(650,350));
    //添加动态图
    mian_label->setMovie(movie); //mian_label是粉色的标签
    //开始动画
    movie->start();

    QToolButton * close_btn = new QToolButton(this);
    close_btn->setGeometry(620,5,30,30);
    close_btn->setIcon(QIcon(":/new/prefix1/Close.png"));


    QToolButton * minisize_btn = new QToolButton(this);
    minisize_btn->setGeometry(590,5,30,30);
    minisize_btn->setIcon(QIcon(":/new/prefix1/Minisize.png"));

    //QtMaterialAppBar *mainBar =new QtMaterialAppBar(this);
    //mainBar->setGeometry(0,0,650,50);
    //mainBar->setBackgroundColor(QColor(186,188,182));
    //mainBar->appBarLayout()->addWidget(ClsW_btn);

   QFont btnFont;
    btnFont.setFamily("黑体");
    btnFont.setPixelSize(25);
    btnFont.setBold(true);
    QtMaterialFlatButton* ok_btn = new QtMaterialFlatButton(this);
    ok_btn->setForegroundColor(QColor(165,169,168));
    ok_btn->setGeometry(225,400,150,40);
    ok_btn->setText("确认登录");
    ok_btn->applyPreset(Material::FlatPreset);
    ok_btn->setFont(btnFont);

    QFont labelFonts;
    labelFonts.setFamily("黑体");
    labelFonts.setPixelSize(15);
    QtMaterialTextField * loginID=  new QtMaterialTextField(this);
    loginID->setGeometry(120,200,400,40);
    QtMaterialTextField * loginPassWord=  new QtMaterialTextField(this);
    loginPassWord->setGeometry(120,280,400,40);

    QLabel * lableID = new QLabel(this);
    lableID->setGeometry(90,200,30,30);
    //lableID->setText("账号");
    //QPicture * LockIcon = new QPicture();
    lableID->setPixmap(QPixmap::fromImage(QImage(":/new/prefix1/lock.png").scaled(lableID->size())));
    //lableID->setFont(labelFonts);

   QLabel * lablePassword = new QLabel(this);
   lablePassword->setGeometry(90,285,30,30);
   lablePassword->setPixmap(QPixmap::fromImage(QImage(":/new/prefix1/book.png").scaled(lableID->size())));


   //记住密码，自动登录
    QCheckBox *autoLoginCb = new QCheckBox(this);
    autoLoginCb->setGeometry(120,320,40,40);

    QCheckBox *remLoginCb = new QCheckBox(this);
    remLoginCb->setGeometry(250,320,40,40);

    QLabel * lableLogin = new QLabel(this);
    lableLogin->setGeometry(150,325,100,30);
    lableLogin->setText("自动登录");
    lableLogin->setFont(labelFonts);

    QLabel * lablerem = new QLabel(this);
    lablerem->setGeometry(280,325,100,30);
    lablerem->setText("记住密码");
    lablerem->setFont(labelFonts);



    QLabel * lablefind = new QLabel(this);
    lablefind->setGeometry(410,325,100,30);
    lablefind->setText("找回密码");
    lablefind->setFont(labelFonts);


    //connect(ui->disabledCheckBox, SIGNAL(toggled(bool)), this, SLOT(updateWidget()));


    connect(minisize_btn, SIGNAL(clicked(bool)), this, SLOT(MinisizeWindow()));

    connect(close_btn,SIGNAL(clicked(bool)),this,SLOT(CloseWindow()));

    connect(ok_btn,SIGNAL(clicked(bool)),this,SLOT(OpenMainWindow()));
}

void LoginUI::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        isDrag  =true;
        mouse_start_point = event->globalPos();
        window_start_point = this->frameGeometry().topLeft();
    }

}

void LoginUI::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag){
        QPoint moveDistance = event->globalPos()-mouse_start_point;
        this->move(window_start_point + moveDistance);

    }
}

void LoginUI::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton)
        isDrag = false;
}

LoginUI::~LoginUI()
{
    delete ui;
}

void LoginUI::CloseWindow()
{
    this->close();
}

void LoginUI::MinisizeWindow()
{
    this->showMinimized();
}

void LoginUI::OpenMainWindow()
{
    //TODO:判断是否登录
    MainWindow * mainWnd = new MainWindow;
    this->close();
    mainWnd->show();
}
