#include "bookinfownd.h"
#include "ui_bookinfownd.h"

BookInfoWnd::BookInfoWnd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookInfoWnd)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->resize(1280,720);
}

BookInfoWnd::~BookInfoWnd()
{
    delete ui;
}

void BookInfoWnd::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        isDrag  =true;
        mouse_start_point = event->globalPos();
        window_start_point = this->frameGeometry().topLeft();
    }
}

void BookInfoWnd::mouseMoveEvent(QMouseEvent *event)
{
    if(isDrag){
        QPoint moveDistance = event->globalPos()-mouse_start_point;
        this->move(window_start_point + moveDistance);

    }
}

void BookInfoWnd::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton)
        isDrag = false;
}
