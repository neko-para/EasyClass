#include "glrender.h"

GlRender::GlRender(QWidget *parent) : QOpenGLWidget(parent), back(0xcfcfcf) {
}

void GlRender::initializeGL() {
	glClearColor(back.redF(), back.greenF(), back.blueF(), 1.0f);
}

void GlRender::resizeGL(int w, int h) {
	glViewport(0, 0, w, h);
}

void GlRender::paintGL() {
	glClear(GL_COLOR_BUFFER_BIT);

}
