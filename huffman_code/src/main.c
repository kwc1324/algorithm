#include "funcs.h"
struct node* root = 0;
struct node* troot = 0;
int front = 0;
int rear = 0;
int main()
{
    int data[sz] = {'s', 'e', 't', 'i', 'c'};
    int freq[sz] = {4, 6, 8, 12, 15};
    huffmanTree(data, freq, 5);
    printf("%d\n", root->freq);
    calcCode();
    printf("%s\n", root->right->right->left->code);
    return 0;
}