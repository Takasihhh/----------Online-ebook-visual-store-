#ifndef VIEWWND_H
#define VIEWWND_H

#include <QMainWindow>

namespace Ui {
class ViewWnd;
}

class ViewWnd : public QMainWindow
{
    Q_OBJECT

public:
    explicit ViewWnd(QWidget *parent = 0);
    ~ViewWnd();

private:
    Ui::ViewWnd *ui;
};

#endif // VIEWWND_H
