#include <iostream>
using namespace std;
class Base{
     public:
     /* 	void greet()
     	{
     		cout<<"\n hello I am parent class";
     	}*/
     	virtual void greet()
     	{
     		cout<<"\n hello I am parent class";
     	}
};
class derived:public Base{
	public:
		void greet()
		{
			cout<<"\n hello I am child class or derived class";
		}
};
int main()
{
	Base *p = new derived;
	p->greet();  // runtime polymorphisim
	return 0;
}
