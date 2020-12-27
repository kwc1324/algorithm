#include "funcs.h"

void heapify(int lastIdx)
{
    int currIdx=lastIdx/2;
    while (currIdx>=1)
    {
        findLoc(currIdx, lastIdx);
        currIdx--;
    }
    
}