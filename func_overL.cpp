//Function Overriding

#include <iostream>

using namespace std;

class base
{
    public:
        void show()
        {
            cout<<"\n Base class \n";
        }
};

class derived:public base
{
    public:
        void show()
        {
            cout<<"\n Derived class \n";
        }
};

int main()
{
    base b;
    derived d;
    b.show();
    d.show();
    return 0;
}
