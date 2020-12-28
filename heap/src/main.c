#include "funcs.h"
int data[20] = {0,3,5,7,1,11,9};

int main()
{
    int a, lastIdx = 6;
    printf("Before heapify %d\n", data[1]);
    heapify(lastIdx);    
    printf("After heapify %d\n", data[1]);
    addToHeap(16, lastIdx);  lastIdx++;
    printf("After addToHeap %d\n", data[1]);
    removeRoot(lastIdx); lastIdx--;
    for (int i = 0; i <= lastIdx; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    
    return 0;
}
