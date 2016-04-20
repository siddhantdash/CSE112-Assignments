#include <iostream>
using namespace std;
double div(int a,int b){
	if(b==0)
	 throw("Division by zero not possible !");
   return (a/b);
}
int main()
{
	int x=9,y=0;
	double z = 0;
	try{
		z=div(x,y);
		cout<<z;
	}
	catch(const char *msg)
	{
		cout<<msg<<endl;
	}
	return 0;
}

