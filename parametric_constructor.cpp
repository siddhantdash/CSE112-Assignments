#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class vehicle
{
        char name[20],type[20],color[10];
        float mileage;
    public:
        char n[20],t[20],c[10];
        float m;
        void getdata()
        {
            cout<<"\n Name : ";puts(name);
            cout<<"\n Type : ";puts(type);
            cout<<"\n Color : ";puts(color);
            cout<<"\n Mileage : "<<mileage<<" km/l\n";
        }
        vehicle(float m,char n[20],char t[20],char c[20])
        {
            mileage = m;
            strcpy(name,n);
            strcpy(type,t);
            strcpy(color,c);
        }
};

int main()
{
    vehicle ob(23.5,"Honda City","Sedan","Silver"), *ptr;
    ptr = &ob;
    ptr -> getdata();
    return 0;
}
