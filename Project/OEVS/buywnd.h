#ifndef BUYWND_H
#define BUYWND_H

#include <QWidget>
#include "odbcdatabase.h"
namespace Ui {
class BuyWnd;
}

class BuyWnd : public QWidget
{
    Q_OBJECT

public:
    explicit BuyWnd(QWidget *parent = 0);
    ~BuyWnd();
protected slots:
    void BuyBtn();
    void cancelBtn();
private:
    Ui::BuyWnd *ui;
    int currentBid;
    int currentUid;
public:
    void SetWnd(const int&uid,const int&bid);
};

#endif // BUYWND_H
