#ifndef RENDER_H
#define RENDER_H

#include <QMainWindow>

namespace Ui {
class Render;
}

class Render : public QMainWindow
{
	Q_OBJECT

public:
	explicit Render(QWidget *parent = 0);
	~Render();

private:
	Ui::Render *ui;
};

#endif // RENDER_H
