
#include<iostream>

using namespace std;

inline int get_SumOfDigit(int num)
{
    if(num == 0)
        return 0;
                
    return num%10 + get_SumOfDigit(num/10);    
}

int main()
{
	int num,SumOfDigit=0;
	cout<<"Enter Number whose sum of digits is to be calculated:"<<endl;
	cin>>num;
    SumOfDigit=get_SumOfDigit(num);
    cout<<"Sum of Digits is"<<SumOfDigit<<endl;
    return 0;
   
}
