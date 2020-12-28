#include "funcs.h"

void addToNode(int sum, int* freq, int* data, int n)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->freq = sum;
    troot = new_node;
    if (root == 0)
    {
        new_node->data = data[n];
        root = new_node;
        return;
    }
    else
    {
        struct node* new_node2 = (struct node*)malloc(sizeof(struct node));
        new_node2->data = data[n];
        new_node2->freq = freq[n];
        if (root->freq < new_node2->freq)
        {
            new_node->left = root;
            new_node->right = new_node2;
            root = new_node;
        }
        else
        {
            new_node->right = root;
            new_node->left = new_node2;
            root = new_node;
        }
    }
    
    return;
}