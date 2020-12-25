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
    printf("bubbleSort\n");
    //bubbleSort(data);
    printf("selectionSort\n");
    //selectionSort(data);
    printf("insertionSort\n");
    //insertionSort(data);
    printf("quickSort\n");
    quickSort(data, 0,1,6);
    return 0;
}