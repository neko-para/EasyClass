#include "render.h"
#include "ui_render.h"
#include <QDesktopWidget>

Render::Render(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::Render)
{
	ui->setupUi(this);
	setWindowFlags(Qt::FramelessWindowHint);
	auto desk = QApplication::desktop();
	auto ar = desk->availableGeometry();
	move(ar.topLeft());
	resize(ar.size());

}

Render::~Render()
{
	delete ui;
}
