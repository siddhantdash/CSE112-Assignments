#include<iostream>

using namespace std;

class sup
{
	protected:
		int a,b;
	public:
		void GetData()
		{
			cout<<"\nEnter value of a for super class: ";
			cin>>a;
			cout<<"\nEnter value of b for super class: ";
			cin>>b;
		}
		void ShowData()
		{
			cout<<"\nThe value of a of super class: "<<a<<"\n";
			cout<<"\nThe value of b of super class: "<<b<<"\n";
		}
};

class sub:public sup
{
	int a,b;
	public:
        void GetData()
        {
                cout<<"\nEnter value of a for sub class: ";
                cin>>a;
                cout<<"\nEnter value of b for sub class: ";
                cin>>b;
        }
        void ShowData()
        {
                cout<<"\nThe value of a of sub class: "<<a<<"\n";
                cout<<"\nThe value of b of sub class: "<<b<<"\n";
        }
	
	void GetDataSup()
	{
		cout<<"\nEnter value of a for super class: ";
		cin>>sup::a;
		cout<<"\nEnter value of b for super class: ";
		cin>>sup::b;
	}
	void ShowDataSup()
	{
		cout<<"\nThe value of a of super class: "<<sup::a<<"\n";
		cout<<"\nThe value of b of super class: "<<sup::b<<"\n";
	}


	
};

int main()
{
	sub s;
	s.GetData();
	s.ShowData();//Call for subclass
	s.GetDataSup();
	s.ShowDataSup();//call for superclass
	return 0;
}
