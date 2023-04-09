#ifndef BOOKBUTTON_H
#define BOOKBUTTON_H

#include <QWidget>
#include "qtmaterialflatbutton.h"
#include "QLabel"
namespace Ui {
class BookButton;
}

class BookButton : public QWidget
{
    Q_OBJECT

public:
    explicit BookButton(QWidget *parent = 0);
    ~BookButton();
    void SetButton(QPixmap & pic,QString & text);

private:
    Ui::BookButton *ui;
    QLabel *const Icon;
    QtMaterialFlatButton  * const btn;
};

#endif // BOOKBUTTON_H
