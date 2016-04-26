// caculate.h: interface for the Ccaculate class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CACULATE_H__B8018FD3_667A_425C_B7D8_53109C5D9F07__INCLUDED_)
#define AFX_CACULATE_H__B8018FD3_667A_425C_B7D8_53109C5D9F07__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class Ccaculate  
{
private:
	char _operate;
	double _x1,_x2;
public:
	Ccaculate();
	virtual ~Ccaculate();
	void getOperate();
	void caculate();
	void getX();
	bool ifRightOperate();

};

#endif // !defined(AFX_CACULATE_H__B8018FD3_667A_425C_B7D8_53109C5D9F07__INCLUDED_)
