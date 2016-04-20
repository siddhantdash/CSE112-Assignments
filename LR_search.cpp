//Made by Siddhant-Assignment CSE112
//Program to implement Linear Search using recursion.

#include <iostream>

using namespace std;

class linear
{
        int arr[10],key,s,ctr;
    public:
        int RecLS(int arr[],int key,int s)
        {
            s = s-1;
            if(s<0)
                return -1;
            else if(arr[s]==key)
            {
                ctr = s;
                return 1;
            }
            else
                return RecLS(arr,key,s);
        }
        void getarr()
        {
            cout<<"\n enter the array \n";
            for(int i=0;i<s;i++)
                cin>>arr[i];
        }
        void getout()
        {
            cout<<"\n enter the key to search \n";
            cin>>key;
            int res;
            res = RecLS(arr,key,s--);
            if(res==1)
                cout<<"\n key found in array at "<<ctr+1<<" position \n";
            else
                cout<<"\n key not found in array \n";
        }
        linear()
        {
            s = 10;
        }
};

int main()
{
    linear *ob = new linear();//Run time memory allocation
    ob->getarr();
    ob->getout();
    delete ob;
    return 0;
}
