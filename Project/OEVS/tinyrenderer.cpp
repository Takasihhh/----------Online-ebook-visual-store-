#include "tinyrenderer.h"
#include <iostream>
#include  <fstream>
#include <QFile>
void TinyRenderer::initsize(QString filename, QImage &textureImg)
{
    program_.addCacheableShaderFromSourceFile(QOpenGLShader::Vertex,":/Shader/ShaderProgram/vsrc1.vert");
    program_.addCacheableShaderFromSourceFile(QOpenGLShader::Fragment,":/Shader/ShaderProgram/fsrc.frag");
    //program_.addShaderFromSourceFile(QOpenGLShader::Vertex,":/Shader/ShaderSourceFile/shapes.vert");
    //program_.addShaderFromSourceFile(QOpenGLShader::Fragment,":/Shader/ShaderSourceFile/shapes.frag");
    bool access =  program_.link();
    if(!access)
        qDebug()<<"连接着色器失败"<<endl;

   bool sucessLoad =  loadObj(filename,vertPoints_,texturePoints_,normalPoints_);
   //if(!sucessLoad)
     // qDebug()<<"加载失败"<<endl;

  //  bool sucessLoad = LoadObj(filename,vertPoints_,texturePoints_,normalPoints_);
    if(!sucessLoad)
        qDebug()<<"加载失败"<<endl;

   //objModelLoader.load(filename,vertPoints_,texturePoints_,normalPoints_);
    QVector<float> points;
    //points<<vertextPoints<<texturePoints<<normalPoints;
    points << vertPoints_ << texturePoints_ << normalPoints_;
    qDebug()<<points.size()<<endl;
    vbo_.create();
    vbo_.bind();
    vbo_.allocate(points.data(),points.count() * sizeof(float));

    texture_ = new QOpenGLTexture(textureImg);
    texture_->setWrapMode(QOpenGLTexture::ClampToEdge);
    texture_->setMinMagFilters(QOpenGLTexture::Nearest,QOpenGLTexture::Linear);
}

void TinyRenderer::render(QOpenGLExtraFunctions *f, QMatrix4x4 &pMatrix, QMatrix4x4 &vMatrix, QMatrix4x4 &mMatrix, QVector3D &cameraLocation, QVector3D &lightCation)
{
    f->glEnable(GL_DEPTH_TEST);
    program_.bind();
    vbo_.bind();
    f->glActiveTexture(GL_TEXTURE0 + 0);
    program_.setUniformValue("uPMatrix",pMatrix);
    program_.setUniformValue("uVMatrix",vMatrix);
    program_.setUniformValue("uMMatrix",mMatrix);
    program_.setUniformValue("uLightLocation",lightCation);
    program_.setUniformValue("uCamera",cameraLocation);
    program_.setUniformValue("sTexture",0);

    program_.enableAttributeArray(0);
    program_.enableAttributeArray(1);
    program_.enableAttributeArray(2);
    program_.setAttributeBuffer(0,GL_FLOAT,0,3,3*sizeof(GLfloat));
    program_.setAttributeBuffer(1,GL_FLOAT,vertPoints_.count() * sizeof(GLfloat),2,2*sizeof(GLfloat));
    program_.setAttributeBuffer(2,GL_FLOAT,(vertPoints_.count() + texturePoints_.count()) * sizeof(GLfloat),3,3*sizeof(GLfloat));
    texture_->bind(0);
    f->glDrawArrays(GL_TRIANGLES,0,vertPoints_.count()/3);

    program_.disableAttributeArray(0);
    program_.disableAttributeArray(1);
    program_.disableAttributeArray(2);
    texture_->release();
    vbo_.release();
    program_.release();
    f->glDisable(GL_DEPTH_TEST);
}

bool TinyRenderer::loadObj(QString fileName, QVector<float> &vPoints, QVector<float> &tPoints, QVector<float> &nPoints)
{
    if(fileName.mid(fileName.lastIndexOf('.')) != ".obj"){
            qDebug() << "file is not a obj file";
            return false;
        }

        QFile objFile(fileName);
        if(!objFile.open(QIODevice::ReadOnly)){
            qDebug() << "open" << fileName << "failed";
            return false;
        }

        QVector<float> vertextPoints,texturePoints,normalPoints;
        QVector<std::tuple<int,int,int>> facesIndexs;
        while (!objFile.atEnd()) {
            QByteArray lineData = objFile.readLine();
            lineData = lineData.remove(lineData.count() - 2,2);
            if(lineData.isEmpty()){
                for(auto &verFaceInfo : facesIndexs){
                    int vIndex = std::get<0>(verFaceInfo);
                    int tIndex = std::get<1>(verFaceInfo);
                    int nIndex = std::get<2>(verFaceInfo);
                    int vPointSizes = vertextPoints.count() / 3;
                    int tPointSizes = texturePoints.count() / 2;
                    int nPointSizes = normalPoints.count() / 3;
                    vPoints << vertextPoints.at((vPointSizes + vIndex) * 3);
                    vPoints << vertextPoints.at((vPointSizes + vIndex) * 3 + 1);
                    vPoints << vertextPoints.at((vPointSizes + vIndex) * 3 + 2);

                    tPoints << texturePoints.at((tPointSizes + tIndex) * 2);
                    tPoints << texturePoints.at((tPointSizes + tIndex) * 2 + 1);

                    nPoints << normalPoints.at((nPointSizes + nIndex) * 3);
                    nPoints << normalPoints.at((nPointSizes + nIndex) * 3 + 1);
                    nPoints << normalPoints.at((nPointSizes + nIndex) * 3 + 2);
                }
                vertextPoints.clear();
                texturePoints.clear();
                normalPoints.clear();
                facesIndexs.clear();
                continue;
            }

            QList<QByteArray> strValues = lineData.split(' ');
            QString dataType = strValues.takeFirst();
            if(dataType == "v"){
                std::transform(strValues.begin(),strValues.end(),std::back_inserter(vertextPoints),[](QByteArray &str){
                    return str.toFloat();
                });
            }else if(dataType == "vt"){
                std::transform(strValues.begin(),strValues.end(),std::back_inserter(texturePoints),[](QByteArray &str){
                    return str.toFloat();
                });
            }else if(dataType == "vn"){
                std::transform(strValues.begin(),strValues.end(),std::back_inserter(normalPoints),[](QByteArray &str){
                    return str.toFloat();
                });
            }else if(dataType == "f"){
                std::transform(strValues.begin(),strValues.end(),std::back_inserter(facesIndexs),[](QByteArray &str){
                    QList<QByteArray> intStr = str.split('/');
                    return std::make_tuple(-intStr.first().toInt(),-intStr.at(1).toInt(),-intStr.last().toInt());
                });
            }
        }
        objFile.close();
}

