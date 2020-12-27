#include "funcs.h"

void findLoc(int currIdx, int lastIdx)
{
    int biggest = currIdx;
    int leftIdx = currIdx * 2;
    int rightIdx = leftIdx + 1;
    if (data[leftIdx] > data[currIdx] && leftIdx <= lastIdx)
    {
        biggest = leftIdx;
    }
    if (data[rightIdx] > data[biggest] && rightIdx <= lastIdx)
    {
        biggest = rightIdx;
    }
    if (biggest != currIdx)
    {
        swap(biggest, currIdx);
        findLoc(biggest, lastIdx);
    }
        
}