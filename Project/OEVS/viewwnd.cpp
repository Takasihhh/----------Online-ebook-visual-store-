#include "viewwnd.h"
#include "ui_viewwnd.h"

ViewWnd::ViewWnd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ViewWnd)
{
    ui->setupUi(this);
    this->resize(QSize(1280,720));
    this->setCentralWidget(ui->openGLWidget);
}

ViewWnd::~ViewWnd()
{
    delete ui;
}
