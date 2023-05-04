#ifndef LOGINUI_H
#define LOGINUI_H


#include "QMouseEvent"
#include <QWidget>
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
#include "main_interface.h"

#define MAXLEN 12
#define MINLEN 6

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
    void LoginToWnd();
    void openSignupWnd();
private:
    Ui::LoginUI *ui;
    QtMaterialFlatButton* ok_btn;
    QtMaterialFlatButton * signUp_btn;
    QtMaterialTextField * loginID;
    QtMaterialTextField * loginPassWord;
    QCheckBox *autoLoginCb;
     QCheckBox *remLoginCb ;
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
