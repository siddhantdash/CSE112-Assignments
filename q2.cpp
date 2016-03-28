#include<iostream>
using namespace std;
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
	s1.marks=100;//Error as we cannot access private members from main function
	s1.display_details();
}