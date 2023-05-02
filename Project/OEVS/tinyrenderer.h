#ifndef TINYRENDERER_H
#define TINYRENDERER_H

#include <QOpenGLShaderProgram>
#include <QOpenGLExtraFunctions>
#include <QOpenGLTexture>
#include <QOpenGLBuffer>
class TinyRenderer
{
public:
    TinyRenderer() = default;
    void initsize(QString filename,QImage &textureImg);
    void render(QOpenGLExtraFunctions *f,QMatrix4x4 &pMatrix,QMatrix4x4 &vMatrix,QMatrix4x4 &mMatrix,QVector3D &cameraLocation,QVector3D &lightCation);
    bool loadObj(QString fileName, QVector<float> &vPoints,QVector<float> &tPoints,QVector<float> &nPoints);
private:
    QOpenGLTexture *texture_{nullptr};
    QOpenGLBuffer vbo_;
    QOpenGLShaderProgram program_;
    QVector<float> vertPoints_,texturePoints_,normalPoints_;
};


#endif // TINYRENDERER_H
