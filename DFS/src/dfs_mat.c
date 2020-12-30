#include "funcs.h"

void dfs_mat(struct graphType *g, int start)
{
    push(start);
    while (1)
    {
        int v = pop();
        if (v == -999) return;
        printf("%d 방문\n", v);
        
        for (int i = MAX-1; i >= 0; i--)
        {
            if (visited[i]!=TRUE && g->adjMat[v][i] == TRUE)
            {
                push(i);
                g->adjMat[v][i] == FALSE;
                g->adjMat[i][v] == FALSE;
            }
        }
        visited[v] = TRUE;
    }
}