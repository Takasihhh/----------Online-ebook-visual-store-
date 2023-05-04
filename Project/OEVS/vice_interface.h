#ifndef VICE_INTERFACE_H
#define VICE_INTERFACE_H

#include <QWidget>
#include "qtmaterialappbar.h"
#include "QMouseEvent"
#include "qtoolbutton.h"
#include "odbcdatabase.h"
#include <QListWidget>
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
    void UpdateBook(QListWidgetItem* item);
    void Openurl();
private:
    Ui::vice_interface *ui;
    QtMaterialAppBar *const headerBar;
    QPoint mouse_start_point;
    QPoint window_start_point;
    QList<personStruct> res;
    bool isDrag;
    int currentIndex;
private:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
private:
    void InitUI();
    void UpdatePage();
public:
    void SetWnd(const int& uid);
};

#endif // VICE_INTERFACE_H
