#include<iostream>
#include<string.h>
#include<stdio.h>


using namespace std;

class employee
{
    public:
    char name[50];
    int age;
    static int salary;
    char designation[50];
    static string email;
    void inp_instance()
    {
        cout<<"Enter the Name:\n";
        cin>>name;
        cout<<"Enter the Age:\n";
        cin>>age;
        cout<<"Enter the Designation:\n";
        gets(designation);
    }
    void out_instance()
    {
        cout<<"------EMPLOYEE DETAILS------"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Designation:"<<designation<<endl;

    }
    static void inp_static()
    {
        cout<<"Enter the Salary:";
        cin>>salary;
        cout<<"Enter the Email ID:";
        cin>>email;
    }
    static void out_static()
    {
      
        cout<<"\nSalary:"<<salary<<"\nEmail ID:"<<email<<endl;
    }
};
int employee::salary=0;
string employee::email="a";

int main()
{
    employee o1;
    // Instance variables being accessed by object name
    o1.inp_instance();
    employee::inp_static();
    // Static members accessed by name of class
    o1.out_instance();
    employee::out_static();
    return 0;
}
