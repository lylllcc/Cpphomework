// caculate.cpp: implementation of the Ccaculate class.
//
//////////////////////////////////////////////////////////////////////

#include "caculate.h"
#include <iostream>
#include <string>
using namespace std;

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Ccaculate::Ccaculate()
{
	cout<<"请输入+、-、*、/来表示要进行的计算"<<endl;
}

Ccaculate::~Ccaculate()
{

}
void Ccaculate::getOperate()
{
	string operate;
	cin>>operate;
	this->_operate = operate[0];
	cout<<this->_operate;

}
void Ccaculate::caculate()
{
	double ans=0;
	switch(this->_operate)
	{
		case '+':
			cout<<this->_x1+this->_x2<<endl;
			break;
		case '-':
			cout<<this->_x1-this->_x2<<endl;
			break;
		case '*':
			cout<<this->_x1*this->_x2<<endl;
			break;
		case '/':
			cout<<1.0*this->_x1/this->_x2<<endl;
			break;
		default:
			cout<<"请输入正确的运算符"<<endl;
	}
}
void Ccaculate::getX()
{
	cout<<"请输入两个数中间以逗号隔开"<<endl;
	double x1,x2;
	cin>>x1>>x2;
	this->_x1 = x1;
	this->_x2 = x2;
}
