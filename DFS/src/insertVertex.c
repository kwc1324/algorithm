#include "funcs.h"

void insertVertex(struct graphType* g, int _i)
{
    if (g->nCnt >= MAX)
    {
        perror("insertVertex error");
        exit(1);
    }
    for (int i = 0; i < _i; i++)
    {
        g->nCnt++;
    }
    return;
}