#include "funcs.h"

void findCode(char c)
{
    struct node *curr = root;
    enque(curr);
    while (!isEmpty())
    {
        if (curr->data == c)
        {
            printf("%s\n", curr->code);
            return;
        }
        if (curr->left != 0)
        {
            enque(curr->left);
        }
        if (curr->right != 0)
        {
            enque(curr->right);
        }
        deque(curr);
        curr = queue[front];
    }
}