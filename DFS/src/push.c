#include "funcs.h"

void push(int v)
{
    if (isFull())
    {
        return;
    }
    top++;
    stack[top] = v;
    return;    
}