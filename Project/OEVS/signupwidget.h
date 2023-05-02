#ifndef SIGNUPWIDGET_H
#define SIGNUPWIDGET_H

#include <QWidget>

#include "QMouseEvent"
#include <QVBoxLayout>
#include<qcolordialog.h>
#include"qlabel.h"
#include<qtmaterialtoggle.h>
#include<qtmaterialflatbutton.h>
#include<qtmaterialflatbutton_internal.h>
#include<qtmaterialtextfield.h>
#include<qtmaterialcheckbox.h>
#include "qcheckbox.h"
#include "qmovie.h"
#include <qtmaterialappbar.h>
#include "qtoolbutton.h"

namespace Ui {
class SignUpWidget;
}

class SignUpWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SignUpWidget(QWidget *parent = 0);
    ~SignUpWidget();
protected slots:
    void CloseWindow();
    void MinisizeWindow();
    void SignUp();
private:
    Ui::SignUpWidget *ui;
    QPoint mouse_start_point;
    QPoint window_start_point;
    QtMaterialFlatButton* ok_btn;
    QtMaterialTextField * UserID;
    QtMaterialTextField * loginID;
    QtMaterialTextField * loginPassWord;
    QtMaterialTextField * reLoginPwd;
    bool isDrag;
private:
    InitUI();

private:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
};

#endif // SIGNUPWIDGET_H
