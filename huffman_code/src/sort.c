#include "funcs.h"

void sort(int *data, int *freq, int cnt)
{
    for (int i = 0; i < cnt-1; i++)
    {
        for (int j = 0; j < cnt-1-i; j++)
        {
            if (freq[j]>freq[j+1])
            {
                int temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;

                temp = freq[j];
                freq[j] = freq[j+1];
                freq[j+1] = temp;
            }
        }
    }
}