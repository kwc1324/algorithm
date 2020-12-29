#include "funcs.h"

int visited[MAX] = {0,};

void bfs_mat(struct graphType *g, int start)
{
    enque(start);
    while (1)
    {
        int v = deque();
        if (v==-999) return;
        if (visited[v] == TRUE)
        {
            continue;
        }
        
        for (int j = 0; j < MAX; j++)
        {
            if (g->adjMat[v][j] != FALSE && visited[j]!=TRUE)
            {
                g->adjMat[v][j] == FALSE;
                g->adjMat[j][v] == FALSE;
                enque(j);
                printf("%d -> %d\n", v, j);
            }
        }
        visited[v] = TRUE;
    }

    return;
}