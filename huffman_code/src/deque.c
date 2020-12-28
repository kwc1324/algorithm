#include "funcs.h"

struct node* deque()
{
    if (isEmpty())
        return 0;
    struct node* r = queue[front];
    front = (front + 1) % sz;
    return r;
}