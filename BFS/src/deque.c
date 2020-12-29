#include "funcs.h"

int deque()
{
    if (isEmpty())
        return -999;
    int r = queue[front];
    front = (front + 1) % sz;
    return r;
}