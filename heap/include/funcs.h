#ifndef __FUNCS_H__
#define __FUNCS_H__
#include <stdio.h>
int data[20];

void heapify(int lastIdx);
void swap(int i, int j);
void findLoc(int currIdx, int lastIdx);
void addToHeap(int v, int lastIdx);
void removeRoot(int lastIdx);

#endif