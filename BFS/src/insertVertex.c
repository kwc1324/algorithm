#include "funcs.h"

void insertVertex(struct graphType *g, int _i)
{
    if (g->nCnt + 1 != MAX)
    {
        for (int i = 0; i < _i; i++)
        {
            g->nCnt++;
        }
    }
    return;
}