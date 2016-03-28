#include<iostream>
#include<stdio.h>
using namespace std;
class Employee
{
	private: char name[30];
			 int age;
			 long sal;
			 char des[15];
			 char email[20];
	public:
			void input_detail()
			{
				cout<<"\n------INPUT EMPLOYEE DETAILS------";
				cout<<"\nEnter the Name of Employee:\n";
			    gets(name);
			    cout<<"Enter the Age of Employee:\n";
			    cin>>age;
			    cout<<"Enter the Salary of Employee:\n";
			    cin>>sal;
			    cout<<"Enter the Designation of Employee:\n";
			    gets(des);
			    cout<<"Enter the Email ID of Employee:\n";
			    gets(email);
			    cout<<"------END OF INPUT------\n";
			}		  
			void display_details()
			{
				cout<<"\n------EMPLOYEE DETAILS------";
				cout<<endl<<"Name:"<<name<<endl;
				cout<<"Age:"<<age<<endl;
				cout<<"Salary:"<<sal<<endl;
				cout<<"Designation:"<<des<<endl;
				cout<<"Email ID:"<<email<<endl;

			}
			friend void myTrustedfriend();//Friend Function declaration. 

			
};
void myTrustedfriend()//Friend function which will have access to private data members of the class Employee.
{
	Employee emp;
	emp.sal=0;//Accessing Private members and altering their values.
	emp.age=0;
}

int main()
{
	Employee e1;
	e1.input_detail();
	e1.display_details();
	myTrustedfriend();//Calling Friend Function.
	return 0;


}