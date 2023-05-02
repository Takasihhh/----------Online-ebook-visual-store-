#ifndef MAIN_INTERFACE_H
#define MAIN_INTERFACE_H

#include <QWidget>

namespace Ui {
class main_interface;
}

class main_interface : public QWidget
{
    Q_OBJECT

public:
    explicit main_interface(QWidget *parent = 0);
    ~main_interface();

private:
    Ui::main_interface *ui;
};

#endif // MAIN_INTERFACE_H
