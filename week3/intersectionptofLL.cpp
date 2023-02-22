#include <bits/stdc++.h>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

//Brute Force
int intersectPoint(Node* head1, Node* head2)
{
    Node *c1=head1;
    // Your Code Here
    while(c1)
    {
        Node *c2=head2;
        while(c2)
        {
            if(c1 == c2)
                return c1->data;
            c2=c2->next;
        }
        c1=c1->next;
    }
    return -1;
}

//Optimised 1
int intersectPoint(Node* head1, Node* head2)
{
    //Your Code Here
    Node *c1=head1,*c2=head2;
    while(c1!=c2)
    {
        c1=c1->next;
        c2=c2->next;
        
        if(c1==c2)  return c1->data;
        
        if(!c1) c1=head2;
        if(!c2) c2=head1;
    }
    return -1;
}

//Optimised 2
int intersectPoint(Node* head1, Node* head2)
{
    //Your Code Here
    Node *c1=head1,*c2=head2;
    int ct1=0,ct2=0;
    while(c1)
    {
        ct1++;
    }
    while(c2)
    {
        ct2++;
    }
    c1=head1,c2=head2;
    int d = abs(ct1-ct2);
    if(ct2<ct1)
    {
        for(int i=0;i<d;i++)
        {
            c1=c1->next;
        }
    }
    else
    {
        for(int i=0;i<d;i++)
        {
            c2=c2->next;
        }
    }
    while(c1!=c2)
    {
        c1=c1->next;
        c2=c2->next;
        
        if(c1==c2)  return c1->data;
    }
    return -1;
}