#ifndef _FUNCS_H_
#define _FUNCS_H_

#define MAX 50
#define TRUE 1
#define FALSE 0
#include <stdio.h>
#include <stdlib.h>

struct graphType
{
    int nCnt;
    int adjMat[MAX][MAX];
};

int visited[MAX];
#define sz 10
int rear;
int front;
int queue[sz];

int isFull();
int isEmpty();
void enque(int v);
int deque();

void bfs_mat(struct graphType* g, int start);
void init(struct graphType *g);
void insertEdge(struct graphType* g, int _n1, int _n2);
void insertVertex(struct graphType *g, int _i);


#endif