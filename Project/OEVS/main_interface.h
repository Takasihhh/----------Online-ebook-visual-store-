#ifndef MAIN_INTERFACE_H
#define MAIN_INTERFACE_H
#include"qtmaterialappbar.h"
#include <QWidget>
#include "qtoolbutton.h"
#include "QMouseEvent"
#include "odbcdatabase.h"
namespace Ui {
class main_interface;
}

enum interfaceStats{DEFAULTE,SERACH,CLASSIFY,APPEND,SEARCHAPPEND};

class main_interface : public QWidget
{
    Q_OBJECT

public:
    explicit main_interface(QWidget *parent = 0);
    ~main_interface();
public:
    void LoginMWnd(const int& uid);
    main_interface * instance;
private:
    Ui::main_interface *ui;
    QtMaterialAppBar *const headerBar;
    QPoint mouse_start_point;
    QPoint window_start_point;
    bool isDrag;
    interfaceStats stats;
    int currentIndex;
    int currentBid;
    int currentuid;
    QList<searchStruct> search;
private:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
private:
    void InitUI();
    void InitIcon();
    void UpdateIcon();

protected slots:
    void CloseWindow();
    void MinisizeWindow();
    void NextPage();
    void LastPage();
    void SearchNextPage();
    void SearchLastPage();
    void Bind01();
    void Bind02();
    void Bind03();
    void Bind04();
    void Bind05();
    void Bind06();
    void Search();
    void OpenPersonalWnd();
   // void ConnectBtn(const int &bid);
};

#endif // MAIN_INTERFACE_H
