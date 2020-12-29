#include "funcs.h"

void enque(int v)
{
    if (isFull())
        return;
    queue[rear] = v;
    rear = (rear + 1) % sz;
    return;
}