#include "funcs.h"

int findSmallest(int *data, int start_idx)
{
    int smallest_idx = start_idx;
    int smallest = data[start_idx];
    for (int i = start_idx; i < sz; i++)
    {
        if (data[i] < smallest)
        {
            smallest = data[i];
            smallest_idx = i;
        }
    }
    return smallest_idx;
}

void swap(int *data, int i, int j)
{
    int temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}

void selectionSort(int *data)
{
    int smallest_idx;
    for (int i = 0; i < sz; i++)
    {
        smallest_idx = findSmallest(data, i);
        swap(data, smallest_idx, i);
        printAll(data);
    }
    
    return;
}