#include "funcs.h"

void init(struct graphType *g)
{
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            g->adjMat[i][j] = FALSE;
        }
    }
}