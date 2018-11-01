#include "tool.h"
#include "ui_tool.h"
#include "drawtool.h"

Tool::Tool(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::Tool)
{
	ui->setupUi(this);
	setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
}

Tool::~Tool()
{
	delete ui;
}


void Tool::init(DrawTool* dt) {
	drawtool = dt;
	connect(ui->draw, &QPushButton::clicked, [&]() {
		hide();
		drawtool->move(pos());
		drawtool->active();
	});
	connect(ui->exit, &QPushButton::clicked, QApplication::quit);
}

void Tool::active() {
	show();
}
