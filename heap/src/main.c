#include "funcs.h"
int data[20] = {0,3,5,7,1,11,9};

int main()
{
    int a, cnt = 6;
    printf("Before heapify %d\n", data[1]);
    heapify(cnt);    
    printf("After heapify %d\n", data[1]);
    return 0;
}
