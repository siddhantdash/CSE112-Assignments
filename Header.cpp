#include"Header.h"

long facto(int a)
{
	if(a==0||a==1)
		return 1;
	else 
		return a*facto(a-1);
}
