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

//my code implementation
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node *c1=head1,*c2=head2,*prev=NULL,*p1=head1,*p2=head2,*t1,*t2,*ans;
    while(c1&&c2)
    {
        if(c1->data >= c2->data)
        {
            t2=c2;
            while(!c2 && c1->data >= c2->data)
            {
                p2=c2;
                c2=c2->next;
            }
            if(!prev)
            {
                ans=t2;
                prev=t2;
            }
            else    prev->next=t2;
            p2->next=c1;
            prev=c1;
        }
        else
        {
            t1=c1;
            while(!c1 && c1->data < c2->data)
            {
                p1=c1;
                c1=c1->next;
            }
            if(!prev)
            {
                ans=t1;
                prev=t1;
            }
            else    prev->next=t1;
            p1->next=c2;
            prev=c2;
        }
        c1=c1->next;
    }
    while(prev) prev=prev->next;
    return ans;
}

//optimised
Node* merge(Node *h1, Node *h2)
{
    if(!h1->next)
    {
        h1->next = h2;
        return h1;
    }
    
    Node *c1=h1,*c2=h2,*n1=h1->next,*n2=h2->next;
    
    while(n1 && c2)
    {
        if(c2->data >= c1->data && c2->data <= n1->data)
        {
            n2=c2->next;
            c1->next = c2;
            c2->next = n1;
            c1=c2;
            c2=n2;
        }
        else
        {
            if(n1->next)
            {
                c1=n1;
                n1=n1->next;
            }
            else
            {
                n1->next = c2;
                return h1;
            }
        }
    }
    return h1;
}


Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    if(!head1)  return head2;
    if(!head2)  return head1;
    
    if(head1->data < head2->data)
    {
        return merge(head1,head2);
    }
    else
    {
        return merge(head2,head1);
    }
}