#ifndef REGISTERED_H
#define REGISTERED_H

#include <QWidget>

namespace Ui {
class registered;
}

class registered : public QWidget
{
    Q_OBJECT

public:
    explicit registered(QWidget *parent = 0);
    ~registered();

private:
    Ui::registered *ui;
};

#endif // REGISTERED_H
