#include "funcs.h"

int pop(void)
{
	if (isEmpty())
	{
		return -999;
	}
	int r = stack[top];
	top--;
	return r;
}