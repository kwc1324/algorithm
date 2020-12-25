#include "funcs.h"

void printAll(int *data)
{
    for (int i = 0; i < sz; i++)
    {
        if (i == sz - 1)
        {
            printf("%d ", data[i]);
            break;
        }
        printf("%d, ", data[i]);
    }
    printf("\n");
}