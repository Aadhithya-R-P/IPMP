#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *head3=NULL,*current;
    while(head1 && head2)
    {
        if(head1->data == head2->data)
        {
            Node *nn = new Node(head1->data);
            if(!head3)  head3=nn;
            else
            {
                current=head3;
                while(current->next)
                {
                    current=current->next;
                }
                current->next=nn;
            }
            head1=head1->next;
            head2=head2->next;
        }
        if(head1->data < head2->data)
        {
            head1=head1->next;
        }
        if(head2->data < head1->data)
        {
            head2=head2->next;
        }
    }
    return head3;
}