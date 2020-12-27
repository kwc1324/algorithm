#ifndef __FUNCS_H__
#define __FUNCS_H__
#define sz 10
#include <stdio.h>
int stack[sz];
int top;


int isFull();
int isEmpty();
void push(int v);
int pop();

#endif