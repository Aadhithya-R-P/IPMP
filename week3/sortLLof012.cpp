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
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        if(!head || !head->next)    return head;
        int n0=0,n1=0,n2=0;
        Node *curr=head;
        while(curr)
        {
            if(curr->data == 0) n0++;
            if(curr->data == 1) n1++;
            if(curr->data == 2) n2++;
            curr=curr->next;
        }
        curr=head;
        while(curr)
        {
            if(n0>0)
            {
                curr->data = 0;
                n0--;
            }
            else if(n1>0)
            {
                curr->data = 1;
                n1--;
            }
            else if(n2>0)
            {
                curr->data = 2;
                n2--;
            }
            curr=curr->next;
        }
        return head;
    }
};