#ifndef VICE_INTERFACE_H
#define VICE_INTERFACE_H

#include <QWidget>
#include "qtmaterialappbar.h"
#include "QMouseEvent"
#include "qtoolbutton.h"
#include "viewwnd.h"
namespace Ui {
class vice_interface;
}

class vice_interface : public QWidget
{
    Q_OBJECT

public:
    explicit vice_interface(QWidget *parent = 0);
    ~vice_interface();
protected slots:
    void CloseWindow();
    void MinisizeWindow();
    void OpenViewWnd();
private:
    Ui::vice_interface *ui;
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
};

#endif // VICE_INTERFACE_H
