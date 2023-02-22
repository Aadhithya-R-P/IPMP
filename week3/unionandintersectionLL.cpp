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

//Normal but another wat is to sort both the heads separately using merge sort & it'll be same as union and intersection of two sorted LL
struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int> s;
    Node *curr1=head1,*p1,*prev,*curr2=head2,*temp=head1;
    while(curr1)
    {
        p1=curr1;
        s.insert(curr1->data);
        curr1=curr1->next;
    }
    p1->next = head2;
    while(curr2)
    {
        s.insert(curr2->data);
        curr2=curr2->next;
    }
    int i=0;
    for(auto it = s.begin();it!=s.end() && temp;it++)
    {
        prev=temp;
        temp->data = *it;
        temp=temp->next;
    }
    prev->next=NULL;
    return head1;
}