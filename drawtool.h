#ifndef DRAWTOOL_H
#define DRAWTOOL_H

#include <QMainWindow>
#include "render.h"

namespace Ui {
class DrawTool;
}

class Tool;

class DrawTool : public QMainWindow
{
	Q_OBJECT

public:
	explicit DrawTool(QWidget *parent = 0);
	~DrawTool();

	void init(Tool* t, Render* r);
	void active();

private:
	Ui::DrawTool *ui;
	Tool* tool;
	Render* render;
};

#endif // DRAWTOOL_H
