#include "funcs.h"

int main()
{
    struct node *g = (struct node *)malloc(sizeof(struct node));
    init(g);
    insertEdge(g, 0, 1, 29);
    insertEdge(g, 1, 2, 16);
    insertEdge(g, 2, 3, 12);
    insertEdge(g, 3, 4, 22);
    insertEdge(g, 4, 5, 27);
    insertEdge(g, 5, 0, 10);
    insertEdge(g, 6, 1, 15);
    insertEdge(g, 6, 3, 18);
    insertEdge(g, 6, 4, 25);

    kru(g);
    free(g);
    return 0;
}