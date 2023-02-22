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

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(!head||!head->next)  return head;
        Node *tail=head,*curr=head;
        while(tail->next)
        {
            tail=tail->next;
        }
        
        for(int i=0;i<k;i++)
        {
            tail->next=curr;
            curr=curr->next;
            tail=tail->next;
        }
        tail->next=NULL;
        return curr;
    }
};