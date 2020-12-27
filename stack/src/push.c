#include "funcs.h"

void push(int v)
{
	if (isFull())
	{
		return;
	}
	top += 1;
	stack[top] = v;
	return;
}