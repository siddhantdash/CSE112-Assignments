#include <iostream>
#include<malloc.h>

using namespace std;

class Box
{
    public:
        int *get()
        {
            int *ptr;
            ptr = (int*)malloc(sizeof(int));
            free(ptr);
            if(ptr!=NULL)
                ptr = NULL;
            return ptr;
        }
};

int main()
{
    Box ob;
    int *ptr = ob.get();
    return 0;
}
