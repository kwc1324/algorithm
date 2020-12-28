#include "funcs.h"

void removeRoot(int lastIdx)
{
    printf("%d is removed\n", data[1]);
    data[1] = data[lastIdx];
    data[lastIdx] = 0;
    int currIdx = 1;
    while (1)
    {
        int biggest = currIdx;
        int leftIdx = currIdx * 2;
        int rightIdx = currIdx * 2 + 1;
        if (data[currIdx] < data[leftIdx] && leftIdx < lastIdx)
        {
            biggest = leftIdx;
        }
        if (data[biggest] < data[rightIdx] && rightIdx < lastIdx)
        {
            biggest = rightIdx;
        }
        if (currIdx != biggest)
        {
            swap(currIdx, biggest);
        }
        else
            return;
    }
}