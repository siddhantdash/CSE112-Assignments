//Inheritance

#include <iostream>

using namespace std;

class baseclass
{
        int x;
    public:
        void get()
        {
            cout<<"\n enter the value of x\n";
            cin>>x;
            cout<<"\n x = "<<x<<"\n";
        }
        baseclass()
        {
            cout<<"\n Baseclass constructor \n";
        }
        ~baseclass()
        {
            cout<<"\n Baseclass destructor \n";
        }
};

class subclass:public baseclass
{
    public:
        subclass()
        {
            cout<<"\n Subclass constructor \n";
        }
        ~subclass()
        {
            cout<<"\n Subclass destructor \n";
        }
};

int main()
{
    subclass ob1;
    ob1.get();
    return 0;
}
