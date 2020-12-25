#include "funcs.h"

void insertionSort(int* data)
{
    int i, j;
	for ( i = 1; i < sz; i++)
	{
		j = i;
		while ((j-1)>=0 && data[j - 1] > data[j])
		{
			swap(data, j - 1, j);
			j--;
		}
		printAll(data);
	}
    return;
}