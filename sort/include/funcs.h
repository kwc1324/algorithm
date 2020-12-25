#ifndef __FUNCS_H__
#define __FUNCS_H__
#define sz 7

#include <stdlib.h>
#include <stdio.h>

void printAll(int* data);
void bubbleSort(int* data);
void selectionSort(int* data);
void insertionSort(int* data);
void swap(int *data, int i, int j);
void quickSort(int* data, int pivot_idx, int left_idx, int right_idx);

#endif