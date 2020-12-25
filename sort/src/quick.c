#include "funcs.h"

void quickSort(int* data, int pivot_idx, int left_idx, int right_idx)
{
    int p = pivot_idx;
    int l = left_idx;
    int r = right_idx;

    printf("pivot: %d, left: %d, right: %d\n", pivot_idx, l, r);
    printAll(data);

    while (l < r)
    {
        while (data[p] > data[l] && l <= r)
        {
            l = l + 1;
        }
        while (data[p] < data[r] && l <= r)
        {
            r = r - 1;
        }
        if (r < l)
        {
            swap(data, pivot_idx, r);
            quickSort(data, pivot_idx, pivot_idx + 1, r -1);
            quickSort(data, r+1, r+2, right_idx);
        }
        else
        { 
            // l과 r만 바꾸고 계속 진행
            swap(data, l ,r);
            printf("--> ");
            printAll(data);
        }
        
    }
    
    return;
}