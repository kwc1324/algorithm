#include "funcs.h"

int isFull()
{
    return ((rear+1)%sz == front);
}