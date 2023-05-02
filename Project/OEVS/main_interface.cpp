<<<<<<< HEAD
#include "main_interface.h"
#include "ui_main_interface.h"

main_interface::main_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_interface)
{
    ui->setupUi(this);

}

main_interface::~main_interface()
{
    delete ui;
}
=======
#include "main_interface.h"
#include "ui_main_interface.h"

main_interface::main_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::main_interface)
{
    ui->setupUi(this);

}

main_interface::~main_interface()
{
    delete ui;
}
>>>>>>> 26bd0e02415206b1c82c494c3ee192ee4b559c65
