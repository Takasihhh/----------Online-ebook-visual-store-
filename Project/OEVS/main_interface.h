#ifndef MAIN_INTERFACE_H
#define MAIN_INTERFACE_H
<<<<<<< HEAD

#include <QWidget>

=======
#include"qtmaterialappbar.h"
#include <QWidget>
#include "qtoolbutton.h"
#include "QMouseEvent"
>>>>>>> shizhonyu
namespace Ui {
class main_interface;
}

class main_interface : public QWidget
{
    Q_OBJECT

public:
    explicit main_interface(QWidget *parent = 0);
    ~main_interface();
<<<<<<< HEAD

private:
    Ui::main_interface *ui;
=======
protected slots:
    void CloseWindow();
    void MinisizeWindow();
private:
    Ui::main_interface *ui;
    QtMaterialAppBar *const headerBar;
    QPoint mouse_start_point;
    QPoint window_start_point;
    bool isDrag;
private:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
private:
    void InitUI();
>>>>>>> shizhonyu
};

#endif // MAIN_INTERFACE_H
