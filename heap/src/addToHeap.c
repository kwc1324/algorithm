#include "funcs.h"

void addToHeap(int v, int lastIdx)
{
    int currIdx = lastIdx +1;
    data[currIdx] = v;
    while (currIdx > 1)
    {
         int parentIdx = currIdx/2;
         if (data[currIdx] > data[parentIdx])
         {
             swap(currIdx, parentIdx); 
             currIdx = parentIdx;
         }
         else return;
        
    }
        

}