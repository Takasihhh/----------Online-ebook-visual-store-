#include "vice_interface.h"
#include "ui_vice_interface.h"

vice_interface::vice_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::vice_interface)
{
    ui->setupUi(this);
}

vice_interface::~vice_interface()
{
    delete ui;
}
