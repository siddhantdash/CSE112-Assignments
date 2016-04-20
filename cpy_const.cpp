#include<iostream>

using namespace std;

class base
{
        int a;
	public:
	    int getin()
	    {
	        cout<<"\n enter the value of a \n";
	        cin>>a;
	        return a;
	    }
		base()
		{
			cout<<"\n base class constructor \n";
		}
		~base()
		{
			cout<<"\n base class destructor \n";
		}
};

class sub
{
        int x;
	public:
		void access(base ob)
		{
		    x = ob.getin();
		    cout<<"\n x = "<<x<<"\n";
		}
		sub()
		{
			cout<<"\n sub class constructor \n";
		}
		~sub()
		{
			cout<<"\n sub class destructor \n";
		}
};

int main()
{
	sub s1;
	base b1;
	s1.access(b1);
	return 0;
}
