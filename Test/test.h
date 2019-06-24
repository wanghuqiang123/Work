#ifndef TEST_H
#define TEST_H

#include <QtWidgets/QMainWindow>
#include <QVBoxLayout>
#include <QFrame>
#include <QHBoxLayout>
#include <QPushButton>
#include <QStackedWidget>
#include "ui_test.h"

class Test : public QMainWindow
{
	Q_OBJECT
public:
	Test(QWidget *parent = 0);
	~Test();
protected:
	void construct();
	void init_UI();

	void init_right_layout();
	void init_center_layout();

private:
	Ui::TestClass ui;
	QVBoxLayout* vlayout_left;
	QVBoxLayout* vlayout_right;
	QVBoxLayout* vlayout_center;
	QHBoxLayout* hlayout;
	QFrame* frame;
	QFrame* h_frame;
	QPushButton* Setting_Btn;
};

#endif // TEST_H
