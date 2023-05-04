#include "buywnd.h"
#include "ui_buywnd.h"
#include "vice_interface.h"
BuyWnd::BuyWnd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BuyWnd)
{
    ui->setupUi(this);

}

BuyWnd::~BuyWnd()
{
    delete ui;
}

void BuyWnd::BuyBtn()
{
    mysql->SetBuy(currentUid,currentBid);
    vice_interface * newwnd = new vice_interface;
    newwnd->SetWnd(currentUid);

    newwnd->show();
    this->close();
}

void BuyWnd::cancelBtn()
{
    this->close();
}

void BuyWnd::SetWnd(const int &uid, const int &bid)
{
    currentBid = bid;
    currentUid = uid;
    ui->Price_lab->setText(mysql->GetBookPrice(uid,bid));
    connect(ui->buy,SIGNAL(clicked(bool)),this,SLOT(BuyBtn()));
    connect(ui->cancel,SIGNAL(clicked(bool)),this,SLOT(cancelBtn()));
}
