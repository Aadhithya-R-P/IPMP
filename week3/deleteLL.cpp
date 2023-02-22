#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void deleteLL(struct Node *head)
{
    if(head == NULL)    return;
    struct Node *current;
    while(!head)
    {
        current=head;
        head=head->next;
        free(current);
    }
    return;
}