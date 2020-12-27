#include "funcs.h"

int rear = 0;
int front = 0;

int main()
{
    int a;
    while (1)
    {
        scanf("%d", &a);
        if (a == 999) break;
        enque(a);
    }
    int v;
    while ((v=deque())!= -999)
    {
        printf("%d ", v);
    }
    printf("\n");

    return 0;
}