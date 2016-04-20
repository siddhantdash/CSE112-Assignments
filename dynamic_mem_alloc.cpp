#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int *ptr1,*ptr2,i;
	ptr1=(int*)malloc(5*sizeof(int));
	ptr2=(int*)calloc(5,sizeof(int));
	for(i=0;i<5;i++)
	{
		cin>>*(ptr1+i);
	}
        for(i=0;i<5;i++)
        {
                cin>>*(ptr2+i);
        }
	ptr2=(int*)realloc(ptr2,5*sizeof(int));
	for(int i=5;i<10;i++)
	{
		cin>>*(ptr2+i);
	}
	for(int i=0;i<5;i++)
	{
		cout<<*(ptr1+i);
	}
	for(int i=0;i<10;i++)
	{
		cout<<*(ptr2+i);
	}
	free(ptr1);
	free(ptr2);
	return 0;

}
