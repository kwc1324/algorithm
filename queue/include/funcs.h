#ifndef __FUNCS_H__
#define __FUNCS_H__
#include <stdio.h>
#define sz 10
int rear;
int front;
int queue[sz];

int isFull();
int isEmpty();
void enque(int v);
int deque();

#endif