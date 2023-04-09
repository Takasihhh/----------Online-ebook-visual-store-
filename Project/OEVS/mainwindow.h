#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "QMouseEvent"
#include <QMainWindow>
#include "qtmaterialappbar.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected slots:
    void CloseWindow();
    void MinisizeWindow();
private:
    Ui::MainWindow *ui;

private:
    void InitMainWnd();
    void InitBookList();
    void InitSearchFrame();
    void InitMainFrame();
    QtMaterialAppBar *const headerBar;
    QPoint mouse_start_point;
    QPoint window_start_point;
    bool isDrag;
private:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
};

#endif // MAINWINDOW_H
