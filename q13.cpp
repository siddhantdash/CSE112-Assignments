#include<iostream>
#include<stdio.h>
using namespace std;
class Employee
{
	private: char name[30];
			 int age;
			 long sal;
			 char des[15];
			 char*email[20];
			Employee()
			{
				strcpy(name,"Undefined");
				age=0;
				sal=0;
				strcpy(des,"Undefined");
				strcpy(email,"unknown@sample.com")
			}	
	public:	static Employee*Create_Instance(){return new Employee();};
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
			    gets(email)
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
			~Employee()
			{
				cout<<"Destructing...";
			}
};

int main()
{
	Employee*emp;
	emp=Employee::Create_Instance();
	emp.display_details();
	return 0;


}