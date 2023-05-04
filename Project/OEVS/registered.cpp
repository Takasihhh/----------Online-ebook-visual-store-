<<<<<<< HEAD
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
=======
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
>>>>>>> 26bd0e02415206b1c82c494c3ee192ee4b559c65
