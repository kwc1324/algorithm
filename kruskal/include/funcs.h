#ifndef _FUNCS_H_
#define _FUNCS_H_

#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define TRUE 1
#define FALSE 0

struct Edge
{
    int start;
    int end;
    int weight;
};

struct node
{
    int nCnt;
    struct Edge edge[MAX*2];
};

#endif