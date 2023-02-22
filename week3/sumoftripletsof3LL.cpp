#include <bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

int isSumPossible(Node *a, Node *b,Node *c,int S)
{
    //a = random order LL, b = ascending order LL, c = descending order LL
    while(a)
    {
        while(b && c)
        {
            int sum = a->data+b->data+c->data;
            if(sum == S)    return 1;
            if(sum < S)
            {
                b=b->next;
            }
            if(sum > S)
            {
                c=c->next;
            }
        }
        a=a->next;
    }
    return 0;
}