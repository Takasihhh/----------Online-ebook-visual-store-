<<<<<<< HEAD
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
=======
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
>>>>>>> 26bd0e02415206b1c82c494c3ee192ee4b559c65
