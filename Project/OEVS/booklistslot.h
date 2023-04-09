#ifndef BOOKLISTSLOT_H
#define BOOKLISTSLOT_H

#include <QWidget>

namespace Ui {
class BookListSlot;
}

class BookListSlot : public QWidget
{
    Q_OBJECT

public:
    explicit BookListSlot(QWidget *parent = 0);
    ~BookListSlot();

public:
   void UpdateSlot(QPixmap & pixmap,QString & text);

private:
    Ui::BookListSlot *ui;
};

#endif // BOOKLISTSLOT_H
