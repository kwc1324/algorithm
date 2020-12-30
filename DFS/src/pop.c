#include "funcs.h"

int pop()
{
    if (isEmpty())
    {
        return -999;
    }
    int r = stack[top];
    top--;
    return r;
}