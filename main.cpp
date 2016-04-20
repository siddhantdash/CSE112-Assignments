#include"Header.cpp"
#include<iostream>
using namespace std;
int main()
{
	long fact;
	int no;
	cout<<"\nEnter the no to be calculated for factorial: ";
	cin>>no;
	fact=facto(no);
	cout<<"\nFactorial of "<<no <<" is "<<fact<<endl;
	return 0;
}
