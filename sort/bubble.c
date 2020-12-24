#include "funcs.h"

void bubbleSort(int* data)
{
    for (int i = 0; i < sz; i++)
    {
        for (int j = 0; j < sz-1-i; j++)
        {
            if (data[j] > data[j+1])
            {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
        printAll(data);
    }
    return;
}