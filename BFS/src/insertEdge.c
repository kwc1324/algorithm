#include "funcs.h"

void insertEdge(struct graphType* g, int _n1, int _n2)
{
    if (_n1 >= g->nCnt || _n2 >= g->nCnt)
    {
        perror("insertEdge error");
        exit(1);
    }
    g->adjMat[_n1][_n2] = TRUE;
    g->adjMat[_n2][_n1] = TRUE;
    return;
}