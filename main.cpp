#include "render.h"
#include "tool.h"
#include "drawtool.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Render render;
	Tool tool;
	DrawTool drawtool;

	tool.init(&drawtool);
	drawtool.init(&tool, &render);

	render.hide();
	drawtool.hide();
	tool.show();

	return a.exec();
}
