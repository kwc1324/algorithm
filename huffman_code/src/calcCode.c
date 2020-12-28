#include "funcs.h"

void calcCode()
{
    struct node *curr = root;
    strcpy(root->code, "");
    enque(curr);
    while (!isEmpty())
    {
        if (curr->left != 0)
        {
            enque(curr->left);
            strcpy(curr->left->code, curr->code);
            strcat(curr->left->code, "0");
        }
        if (curr->right != 0)
        {
            enque(curr->right);
            strcpy(curr->right->code, curr->code);
            strcat(curr->right->code, "1");
        }
        deque(curr);
        curr = queue[front];
    }

    return;
}