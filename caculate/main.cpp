#include "caculate.h"
#include <iostream.h>
int main()
{
	for(;;)
	{
		Ccaculate* a = new Ccaculate;

		a->getOperate();
		if(a->ifRightOperate()==false)
		{
			cout<<"��������ȷ�Ĳ�����"<<endl;
			continue;
		}
		a->getX();
		a->caculate();
	}
	
	return 0;
}