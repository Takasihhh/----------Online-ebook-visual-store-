#include "qopenglwindow.h"
#include "ui_qopenglwindow.h"


QopenGLWindow::QopenGLWindow(QWidget *parent)
    : QOpenGLWidget(parent)
{
    this->resize(QSize(1280,720));
    connect(&timer,SIGNAL(timeout()),this,SLOT(OnTimeOut()));
    timer.start(30);
}

QopenGLWindow::~QopenGLWindow()
{

}

void QopenGLWindow::initializeGL()
{
    QImage image(":/Model/Model/bookUV.png");
    QImage & ref = image;
    render.initsize(":/Model/Model/book3.obj",ref);
    cameraLocation.setX(0);
    cameraLocation.setY(10);
    cameraLocation.setZ(10);
    lightLocation.setX(10);
    lightLocation.setY(10);
    lightLocation.setZ(1);
    angleY += 90;
}

void QopenGLWindow::resizeGL(int w, int h)
{
    pMatrix.setToIdentity();
    pMatrix.perspective(45,float(w)/h,0.01f,100.0f);
}

void QopenGLWindow::paintGL()
{
    QOpenGLExtraFunctions *f = QOpenGLContext::currentContext()->extraFunctions();
    f->glClearColor(0.0f,0.0f,0.0f,1.0f);
    f->glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    QMatrix4x4 vMatrix;
    vMatrix.lookAt(cameraLocation,QVector3D(0,0,0),QVector3D(0,1,0));

    QMatrix4x4 mMatrix;
    mMatrix.translate(0,-0.8);
//    mMatrix.rotate(angleX_,1,0,0);
    mMatrix.rotate(angleY,0,1,0);
//    mMatrix.rotate(anglZ_,0,0,1);
    render.render(f,pMatrix,vMatrix,mMatrix,cameraLocation,lightLocation);
}

void QopenGLWindow::OnTimeOut()
{
    //angleX += 5;
    //angleY += 5;
    //anglZ += 5;
    update();
}
