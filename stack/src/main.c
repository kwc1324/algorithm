#include "funcs.h"

int top = -1;

int main(void)
{
    int a;
    while (1)
    {
        scanf("%d", &a);
        if (a == 999)
            break;
        push(a);
    }
    int v;
    while ((v = pop()) != -999)
    {
        printf("%d ", v);
    }
    printf("\n");

    return 0;
}