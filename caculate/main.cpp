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
			cout<<"��������ȷ�Ĳ�����"<<endl;
			continue;
		}
		a.getX();
		a.caculate();
	}
	
	return 0;
}