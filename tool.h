#ifndef TOOL_H
#define TOOL_H

#include <QMainWindow>

namespace Ui {
class Tool;
}

class DrawTool;

class Tool : public QMainWindow
{
	Q_OBJECT

public:
	explicit Tool(QWidget *parent = 0);
	~Tool();

	void init(DrawTool* dt);
	void active();

private:
	Ui::Tool *ui;
	DrawTool* drawtool;
};

#endif // TOOL_H
