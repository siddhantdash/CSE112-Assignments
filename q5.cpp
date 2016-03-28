#include<iostream>
using namespace std;
int marks=100;
class student
{	private: int marks;
	public:  char name[30];
			 void input_data()
			 {
			 	cout<<"Enter Name:";
			 	cin.getline(name,30);
			 	cout<<"Enter Marks:";
			 	cin>>marks;
			 }
			 void display_details()
			 {
			 	cout<<"Name:"<<name<<endl;
			 	cout<<"Marks:"<<marks<<endl;
			 }
	//protected: This is needed when we implement Inheritance property.Parent class and derived class,protected access specifier is required.

	
};
int main()
{ 	student s1;
	cout<<"Global Marks:"<<::marks<<endl;//Scope Resolution operator is needed to access global "marks" as "marks" in class "student" hides global one.
	s1.input_data();
	s1.display_details();//This will print "marks" local to class.
}
