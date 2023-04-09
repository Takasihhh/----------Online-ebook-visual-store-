#include "bookbutton.h"
#include "ui_bookbutton.h"

BookButton::BookButton(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookButton),
    Icon(new QLabel),
    btn(new QtMaterialFlatButton)
{
    ui->setupUi(this);
    ui->verticalLayout->addWidget(Icon);
    ui->verticalLayout->addWidget(btn);


}

BookButton::~BookButton()
{
    delete ui;
}

void BookButton::SetButton(QPixmap & pic,QString & text)
{
   Icon->setPixmap(pic);
   Icon->setScaledContents(true);
   btn->setText(text);
}
