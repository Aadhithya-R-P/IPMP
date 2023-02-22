#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node *op=NULL,*ep=NULL,*curr=head,*even=ep,*odd=op;
        while(curr)
        {
            if(curr->data % 2 != 0)
            {
                if(!op)
                {
                    op = curr;
                    odd = op;
                }
                else
                {
                    op->next = curr;
                    op = op->next;
                }
            }
            else
            {
                if(!ep)
                {
                    ep = curr;
                    even = ep;
                }
                else
                {
                    ep->next = curr;
                    ep = ep->next;
                }
            }
            curr = curr->next;
        }
        if(!odd)    return even;
        if(!even)   return odd;
        
        head = even;
        ep->next = odd;
        op->next = NULL;//edge case that causes cycles to stop
        return head;
    }
};