#include "funcs.h"
struct node* root = 0;
struct node* troot = 0;
int front = 0;
int rear = 0;
int main()
{
    char c;
    int data[sz] = {'s', 'e', 't', 'i', 'c'};
    int freq[sz] = {4, 6, 8, 12, 15};
    huffmanTree(data, freq, 5);
    
    printf("찾을 문자를 입력하시오: ");
    scanf("%c", &c);
    findCode(c);
    return 0;
}