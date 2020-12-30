#include "funcs.h"

void insertEdge(struct node* g, int _s, int _e, int _w)
{
    if (_s > MAX || _e > MAX)
    {
        perror("insertEdge");
        exit(1);
    }
    g->edge[_e].start = _s;
    g->edge[_e].end = _e;
    g->edge[_e].weight = _w;
}