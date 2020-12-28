#include "funcs.h"

void huffmanTree(int* data, int* freq, int cnt)
{
    sort(data, freq, cnt);
    int sum = 0;
    for (int i = 0; i < cnt; i++)
    {
        sum += freq[i];
        addToNode(sum, freq, data, i);
    }
    calcCode();
}