#ifndef LOGINUI_H
#define LOGINUI_H


#include "QMouseEvent"
#include <QWidget>
namespace Ui {
class LoginUI;
}

class LoginUI : public QWidget
{
    Q_OBJECT

public:
    explicit LoginUI(QWidget *parent = 0);
    ~LoginUI();
protected slots:
    void CloseWindow();
    void MinisizeWindow();
    void OpenMainWindow();
private:
    Ui::LoginUI *ui;
    QPoint mouse_start_point;
    QPoint window_start_point;
    bool isDrag;
    void InitUI();
private:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
};

#endif // LOGINUI_H
