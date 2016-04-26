#include "caculate.h"
#include <iostream.h>
int main()
{
	for(;;)
	{
		Ccaculate a;
		a.getOperate();
		if(a.ifRightOperate()==false)
		{
			cout<<"请输入正确的操作符"<<endl;
			continue;
		}
		a.getX();
		a.caculate();
	}
	
	return 0;
}