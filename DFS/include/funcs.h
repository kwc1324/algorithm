#ifndef _FUNCS_H_
#define _FUNCS_H_
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX 50
struct graphType
{
    int nCnt;
    int adjMat[MAX][MAX];
};
int visited[MAX];
int top;
int stack[MAX];

void dfs_mat(struct graphType *g, int start);
void init(struct graphType *g);
void insertEdge(struct graphType *g, int _n1, int _n2);
void insertVertex(struct graphType* g, int _i);
int isEmpty();
int isFull();
int pop();
void push(int v);


#endif