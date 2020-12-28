#include "funcs.h"
int data[20] = {0,3,5,7,1,11,9};

int main()
{
    int a, lastIdx = 6;
    printf("Before heapify %d\n", data[1]);
    heapify(lastIdx);    
    printf("After heapify %d\n", data[1]);
    addToHeap(16, lastIdx);
    printf("After addToHeap %d\n", data[1]);
    //removeRoot();
    return 0;
}
