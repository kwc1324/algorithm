#include "funcs.h"

int main()
{
    int data[sz] = {1,3,2,4,9,8,0};
    printf("------------------------\n");
    printf("Before Sort\n");
    for (int i = 0; i < sz; i++)
    {
        if (i == sz - 1)
        {
            printf("%d ", data[i]);
            break;
        }
        printf("%d, ", data[i]);
    }
    printf("\n------------------------\n");
    bubbleSort(data);
    
    return 0;
}