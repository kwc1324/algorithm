#include "funcs.h"
int top = -1;

int main()
{
    struct graphType *g = (struct graphType*)malloc(sizeof(struct graphType));
    init(g);
    for (int i = 0; i < 7; i++)
        insertVertex(g, i);
    insertEdge(g, 0, 1);
    insertEdge(g, 0, 2);
    insertEdge(g, 1, 3);
    insertEdge(g, 1, 4);
    insertEdge(g, 2, 5);
    insertEdge(g, 2, 6);
    insertEdge(g, 0, 1);
    dfs_mat(g, 0);

    return 0;
}