#include<iostream>
using namespace std;
class customer
{	private:long balance 
			void check_balance(long amount)
			{
				if(amount==0)
				{
					cout<<"Cannot process transaction.Please Contact Branch Office\n";
				}
				else if (balance>0 && balance<=500)
				{
					cout<<"Cannot process transaction.Please Contact Branch Office\n";
				}
				else
					cout<<"Processing transaction...\nAmount:"<<amount<<endl;

			}
	public:char name[30];
			char mob_no[12];
			long amount;
			void get_data()
			{
				cout<<"Enter your name:"<<endl;
				cin.getline(name,30);
				cout<<"Enter your Mobile Number:"<<endl;
				cin.getline(mob_no,12);
				cout<<"Enter amount to be withdrawn:"<<endl;
				cin>>amount;
			}
			void display_data()
			{
				cout<<"Name:"<<name<<endl;
				cout<<"Mobile Number:"<<mob_no<<endl;
				check_balance(amount);
			}

};
int main()
{   customer c1;
	c1.get_data();
	c1.display_data();
	return 0;
}