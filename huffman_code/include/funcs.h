#ifndef _FUNCS_H_
#define _FUNCS_H_
#define sz 10
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int freq;
    int data;
    char code[sz];
    struct node* left;
    struct node* right;
};
struct node* root;
struct node* troot;
struct node* queue[sz];
int front;
int rear;
void huffmanTree(int* data, int *freq, int cnt);
void sort(int *data, int *freq, int cnt);
void addToNode(int sum, int* freq, int* data, int n);
void calcCode();
struct node* deque();
void enque(struct node* v);
int isFull();
int isEmpty();

#endif