#include "funcs.h"

void enque(struct node* v)
{
    if (isFull())
        return;
    queue[rear] = v;
    rear = (rear + 1) % sz;
    return;
}