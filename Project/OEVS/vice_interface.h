#ifndef VICE_INTERFACE_H
#define VICE_INTERFACE_H

#include <QWidget>

namespace Ui {
class vice_interface;
}

class vice_interface : public QWidget
{
    Q_OBJECT

public:
    explicit vice_interface(QWidget *parent = 0);
    ~vice_interface();

private:
    Ui::vice_interface *ui;
};

#endif // VICE_INTERFACE_H
