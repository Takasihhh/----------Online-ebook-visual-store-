#include "registered.h"
#include "ui_registered.h"

registered::registered(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registered)
{
    ui->setupUi(this);
}

registered::~registered()
{
    delete ui;
}
