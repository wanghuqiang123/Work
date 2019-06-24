#include "test.h"

Test::Test(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->removeToolBar(ui.mainToolBar);
	construct();
}

Test::~Test()
{

}

void Test::construct()
{
	init_UI();
}

void Test::init_UI()
{
	hlayout = new QHBoxLayout(this);
	vlayout_left = new QVBoxLayout(this);
	vlayout_center = new QVBoxLayout(this);
	vlayout_right = new QVBoxLayout(this);

	//初始化最右边的垂直因子
	init_right_layout();
	
	//在水平布局器中加入3个子垂直布局器
	hlayout->addLayout(vlayout_left);
	hlayout->addLayout(vlayout_center);
	hlayout->addLayout(vlayout_right);

	//设置在水平布局器中的各个部件的垂直因子，各个垂直布局其的比例
	hlayout->setStretchFactor(vlayout_right,1);
	hlayout->setStretchFactor(vlayout_left,1);
	hlayout->setStretchFactor(vlayout_center,10);

	this->centralWidget()->setLayout(hlayout);
}

void Test::init_right_layout()
{
	Setting_Btn = new QPushButton(this);
	Setting_Btn->setText("Setting");

	vlayout_right->addStretch(5);		//加一个弹簧  这个按比例来 这样子按钮的比例就为0，压缩到最小
	vlayout_right->addWidget(Setting_Btn);

}

void Test::init_center_layout()
{
	h_frame = new QFrame(this);
	
}

