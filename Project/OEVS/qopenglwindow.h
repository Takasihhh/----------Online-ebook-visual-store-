#ifndef QOPENGLWINDOW_H
#define QOPENGLWINDOW_H
#include <QOpenGLWidget>
#include <QTimer>
#include "tinyrenderer.h"
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLTexture>
class QopenGLWindow : public QOpenGLWidget
{
    Q_OBJECT

public:
    QopenGLWindow(QWidget *parent = 0);
    ~QopenGLWindow();

protected:
    void initializeGL() override;
    void resizeGL(int w,int h) override;
    void paintGL() override;

private:
    TinyRenderer render;
    QTimer timer;
    QVector3D cameraLocation,lightLocation;
    QMatrix4x4 pMatrix;
    qreal angleX,angleY,anglZ;

private slots:
    void OnTimeOut();
};

#endif // QOPENGLWINDOW_H
