#include "booklistslot.h"
#include "ui_booklistslot.h"

BookListSlot::BookListSlot(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BookListSlot)
{
    ui->setupUi(this);
}

BookListSlot::~BookListSlot()
{
    delete ui;
}

void BookListSlot::UpdateSlot(QPixmap & pixmap, QString & text)
{
    ui->BookName->setText(text);
   // pixmap.scaled(ui->BookIcon->size());
    ui->BookIcon->setScaledContents(true);
    ui->BookIcon->setPixmap(pixmap);

}
