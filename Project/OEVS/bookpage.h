#ifndef BOOKPAGE_H
#define BOOKPAGE_H

#include <QWidget>
#include "qtmaterialappbar.h"
#include "QMouseEvent"
#include "qtoolbutton.h"
#include "viewwnd.h"

namespace Ui {
class BookPage;
}

class BookPage : public QWidget
{
    Q_OBJECT

public:
    explicit BookPage(QWidget *parent = 0);
    ~BookPage();
protected slots:
    void CloseWindow();
    void MinisizeWindow();
    void BackMWnd();
    void OpenBuyWnd();
private:
    Ui::BookPage *ui;
    QtMaterialAppBar *const headerBar;
    QPoint mouse_start_point;
    QPoint window_start_point;
    bool isDrag;
    int currentBid;
    int currentUid;
private:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
private:
    void InitUI();
    void ReadPage(const int& bid);

public:
    void SetWnd(const int&uid);
    void SetBid(const int& bid);
};

#endif // BOOKPAGE_H
