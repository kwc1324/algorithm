#include "funcs.h"

int main()
{
    struct graphType* g = (struct graphType*)malloc(sizeof(struct graphType));
    init(g);
    int a = 5;
    printf("생성할 노드의 개수: 5개\n");
    for (int i = 0; i < a; i++)
        insertVertex(g,i);
    insertEdge(g,0,1);
    insertEdge(g,0,2);
    insertEdge(g,1,3);
    insertEdge(g,1,4);
    insertEdge(g,2,5);
    insertEdge(g,2,6);
    printf("Execute DFS\n");
    bfs_mat(g, 0);
    free(g);
    return 0;
}