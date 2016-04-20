#include <iostream>

using namespace std;

class staticx
{
    public:
        static int x;
        static void data()
        {
            cout<<"\n enter the value of x \n";
            cin>>x;
            cout<<"\n x = "<<x<<"\n";
        }
};

int staticx :: x;

int main()
{
    staticx :: data();
    return 0;
}
