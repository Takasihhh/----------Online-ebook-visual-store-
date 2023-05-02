#include "signupwidget.h"
#include "ui_signupwidget.h"
#include "odbcdatabase.h"
#include <QMessageBox>
using namespace Material;

SignUpWidget::SignUpWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignUpWidget)
{
    ui->setupUi(this);
    //去窗口边框
        setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->resize(650,550);
    InitUI();

}

SignUpWidget::~SignUpWidget()
{
    delete ui;
}

void SignUpWidget::CloseWindow()
{
    this->close();
}

void SignUpWidget::MinisizeWindow()
{
    this->showMinimized();
}

void SignUpWidget::SignUp()
{
   // this->close();
    if(loginPassWord->text()==NULL || reLoginPwd->text()==NULL || loginID->text() == NULL || UserID->text() == NULL)
    {
        QMessageBox::warning(NULL,"提示","输入为空");
        return;
    }

    if(loginPassWord->text()!=reLoginPwd->text())
    {
        loginPassWord->setText("密码不一致");
        loginID->setText("");
        UserID->setText("");
        reLoginPwd->setText("");
        return;
    }
    mysql->SignUpUser(UserID->text(),loginID->text(),loginPassWord->text());
}

SignUpWidget::InitUI()
{
    QLabel *mian_label = new QLabel(this);
    mian_label->setGeometry(0,0,650,100);
    QMovie * movie = new QMovie(":/Img/Image/Bg_gif.gif");
    //设置动态图大小
   // QWidget m_si = new QWidget;
    //m_si.setWidth(431);
    //m_si.setHeight(151);
    movie->setScaledSize(QSize(650,250));
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

    UserID = new QtMaterialTextField(this);
    UserID->setGeometry(120,160,300,40);
    loginID=  new QtMaterialTextField(this);
    loginID->setGeometry(120,220,400,40);
    loginPassWord=  new QtMaterialTextField(this);
    loginPassWord->setGeometry(120,300,400,40);
    reLoginPwd = new QtMaterialTextField(this);
    reLoginPwd->setGeometry(120,380,400,40);


    QLabel * lableuid = new QLabel(this);
    lableuid->setGeometry(40,160,80,30);
    //lablePassword->setPixmap(QPixmap::fromImage(QImage(":/Img/Image/book.png").scaled(lableID->size())));
    lableuid->setText("输入用户名");

    QLabel * lableID = new QLabel(this);
    lableID->setGeometry(50,220,60,30);
    lableID->setText("输入账号");
    //QPicture * LockIcon = new QPicture();
    //lableID->setPixmap(QPixmap::fromImage(QImage(":/Img/Image/lock.png").scaled(lableID->size())));
    //lableID->setFont(labelFonts);

   QLabel * lablePassword = new QLabel(this);
   lablePassword->setGeometry(50,300,80,30);
   //lablePassword->setPixmap(QPixmap::fromImage(QImage(":/Img/Image/book.png").scaled(lableID->size())));
   lablePassword->setText("输入密码");

    QLabel * labelRePwd = new QLabel(this);
    labelRePwd->setGeometry(20,380,100,30);
    labelRePwd->setText("再次输入密码");

    QFont btnFont;
    btnFont.setFamily("黑体");
    btnFont.setPixelSize(25);
    btnFont.setBold(true);
    ok_btn = new QtMaterialFlatButton(this);
    ok_btn->setForegroundColor(QColor(165,169,168));
    ok_btn->setGeometry(225,450,150,40);
    ok_btn->setText("确认注册");
    ok_btn->applyPreset(Material::FlatPreset);
    ok_btn->setFont(btnFont);

    connect(minisize_btn, SIGNAL(clicked(bool)), this, SLOT(MinisizeWindow()));
    connect(close_btn,SIGNAL(clicked(bool)),this,SLOT(CloseWindow()));
    connect(ok_btn,SIGNAL(clicked(bool)),this,SLOT(SignUp()));
}

void SignUpWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        isDrag  =true;
        mouse_start_point = event->globalPos();
        window_start_point = this->frameGeometry().topLeft();
    }
}

void SignUpWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag){
        QPoint moveDistance = event->globalPos()-mouse_start_point;
        this->move(window_start_point + moveDistance);

    }
}

void SignUpWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton)
        isDrag = false;
}
