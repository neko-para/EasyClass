#ifndef GLRENDER_H
#define GLRENDER_H

#include <QOpenGLWidget>


class GlRender : public QOpenGLWidget
{
public:
	GlRender(QWidget *parent = 0);

protected:
	virtual void paintGL();
	virtual void resizeGL(int w, int h);
	virtual void initializeGL();

private:
	QColor back;
};

#endif // GLRENDER_H
