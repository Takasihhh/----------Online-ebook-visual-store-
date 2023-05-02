#include "loginui.h"
#include "ui_loginui.h"
#include "odbcdatabase.h"
//#include <QDebug>
#include "signupwidget.h"
//#include "qabstractbutton.h"
#include "qdebug.h"
using namespace Material;

LoginUI::LoginUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginUI)
{

    ui->setupUi(this);
    //去窗口边框
        setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->resize(650,550);

    trueLoginID = "1234567";
    trueLoginPwd = "abcdefg";
    InitUI();



}


void LoginUI::InitUI(){

    QLabel *mian_label = new QLabel(this);
    mian_label->setGeometry(0,0,650,150);
    QMovie * movie = new QMovie(":/Img/Image/Bg_gif.gif");
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
    close_btn->setIcon(QIcon(":/Img/Image/Close.png"));


    QToolButton * minisize_btn = new QToolButton(this);
    minisize_btn->setGeometry(590,5,30,30);
    minisize_btn->setIcon(QIcon(":/Img/Image/Minisize.png"));

    //QtMaterialAppBar *mainBar =new QtMaterialAppBar(this);
    //mainBar->setGeometry(0,0,650,50);
    //mainBar->setBackgroundColor(QColor(186,188,182));
    //mainBar->appBarLayout()->addWidget(ClsW_btn);

    QFont btnFont;
    btnFont.setFamily("黑体");
    btnFont.setPixelSize(25);
    btnFont.setBold(true);
    ok_btn = new QtMaterialFlatButton(this);
    ok_btn->setForegroundColor(QColor(165,169,168));
    ok_btn->setGeometry(225,400,150,40);
    ok_btn->setText("确认登录");
    ok_btn->applyPreset(Material::FlatPreset);
    ok_btn->setFont(btnFont);

    QFont labelFonts;
    labelFonts.setFamily("黑体");
    labelFonts.setPixelSize(15);
    loginID=  new QtMaterialTextField(this);
    loginID->setGeometry(120,200,400,40);
    loginPassWord=  new QtMaterialTextField(this);
    loginPassWord->setGeometry(120,280,400,40);

    QLabel * lableID = new QLabel(this);
    lableID->setGeometry(90,200,30,30);
    //lableID->setText("账号");
    //QPicture * LockIcon = new QPicture();
    lableID->setPixmap(QPixmap::fromImage(QImage(":/Img/Image/lock.png").scaled(lableID->size())));
    //lableID->setFont(labelFonts);

   QLabel * lablePassword = new QLabel(this);
   lablePassword->setGeometry(90,285,30,30);
   lablePassword->setPixmap(QPixmap::fromImage(QImage(":/Img/Image/book.png").scaled(lableID->size())));


   //记住密码，自动登录
    autoLoginCb = new QCheckBox(this);
    autoLoginCb->setGeometry(120,320,40,40);

    remLoginCb = new QCheckBox(this);
    remLoginCb->setGeometry(250,320,40,40);

    QLabel * lableLogin = new QLabel(this);
    lableLogin->setGeometry(150,325,100,30);
    lableLogin->setText("自动登录");
    lableLogin->setFont(labelFonts);

    QLabel * lablerem = new QLabel(this);
    lablerem->setGeometry(280,325,100,30);
    lablerem->setText("记住密码");
    lablerem->setFont(labelFonts);

    QFont btnFont_02;
    btnFont_02.setFamily("黑体");
    btnFont_02.setPixelSize(15);
    signUp_btn  = new QtMaterialFlatButton(this);
    signUp_btn->setGeometry(410,325,100,30);
    signUp_btn->setText("注册账号");
    signUp_btn->applyPreset(Material::FlatPreset);
    signUp_btn->setFont(btnFont_02);
    //QLabel * lablefind = new QLabel(this);
    //lablefind->setGeometry(410,325,100,30);
    //lablefind->setText("注册账号");
    //lablefind->setFont(labelFonts);

    //QFont wrongFont;
    //wrongFont.setFamily("楷体");
    //wrongFont.setPixelSize(25);
    //wrongFont.setBold(true);
    //wrongTips->setGeometry(225,300,150,40);
    //wrongTips->setFont(wrongFont);
    //wrongTips->close();
    //connect(ui->disabledCheckBox, SIGNAL(toggled(bool)), this, SLOT(updateWidget()));


    connect(minisize_btn, SIGNAL(clicked(bool)), this, SLOT(MinisizeWindow()));

    connect(close_btn,SIGNAL(clicked(bool)),this,SLOT(CloseWindow()));

    connect(ok_btn,SIGNAL(clicked(bool)),this,SLOT(LoginToWnd()));

    connect(signUp_btn,SIGNAL(clicked(bool)),this,SLOT(openSignupWnd()));
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


void LoginUI::LoginToWnd()
{
    QString acc = loginID->text();
    QString pwd = loginPassWord->text();
    QString uid;
    if(acc==NULL || pwd == NULL)
    {
        //qDebug()<<"密码或账号为空"<<std::endl;
       //wrong_01 = "密码或账号为空";
       //wrongTips->setText(wrong_01);
       //wrongTips->show();
        loginID->setText("密码或账号为空");
        loginPassWord->setText("");
        return;
    }
    if(!mysql->CheckLogin(uid,acc,pwd))
    {
        //qDebug()<<"密码或账号错误"<<std::endl;
        loginID->setText("密码或账号错误");
        loginPassWord->setText("");
        return;
    }

    if(pwd.length()<MINLEN || pwd.length()>MAXLEN || acc.length()<MINLEN || acc.length()>MAXLEN)
    {
        //qDebug()<<"账号或密码格式错误"<<std::endl;
        loginID->setText("账号或密码格式错误");
         loginPassWord->setText("");
        return;
    }
    //TODO:判断是否登录
    MainWindow * mainWnd = new MainWindow;
    this->close();
    mainWnd->show();

}

void LoginUI::openSignupWnd()
{
    SignUpWidget * signup;
    //this->close();
    signup->show();
}
