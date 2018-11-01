#include "drawtool.h"
#include "ui_drawtool.h"
#include "tool.h"

DrawTool::DrawTool(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::DrawTool)
{
	ui->setupUi(this);
	setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
}

DrawTool::~DrawTool()
{
	delete ui;
}

void DrawTool::init(Tool *t, Render *r) {
	tool = t;
	render = r;
	connect(ui->back, &QPushButton::clicked, [&]() {
		render->hide();
		hide();
		tool->move(pos());
		tool->active();
	});
	connect(ui->exit, &QPushButton::clicked, QApplication::quit);
}

void DrawTool::active() {
	render->show();
	show();
}
