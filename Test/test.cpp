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

	//��ʼ�����ұߵĴ�ֱ����
	init_right_layout();
	
	//��ˮƽ�������м���3���Ӵ�ֱ������
	hlayout->addLayout(vlayout_left);
	hlayout->addLayout(vlayout_center);
	hlayout->addLayout(vlayout_right);

	//������ˮƽ�������еĸ��������Ĵ�ֱ���ӣ�������ֱ������ı���
	hlayout->setStretchFactor(vlayout_right,1);
	hlayout->setStretchFactor(vlayout_left,1);
	hlayout->setStretchFactor(vlayout_center,10);

	this->centralWidget()->setLayout(hlayout);
}

void Test::init_right_layout()
{
	Setting_Btn = new QPushButton(this);
	Setting_Btn->setText("Setting");

	vlayout_right->addStretch(5);		//��һ������  ����������� �����Ӱ�ť�ı�����Ϊ0��ѹ������С
	vlayout_right->addWidget(Setting_Btn);

}

void Test::init_center_layout()
{
	h_frame = new QFrame(this);
	
}

