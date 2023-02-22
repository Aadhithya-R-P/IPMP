#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        if(!head)   return -1;
        Node *slow=head,*fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
};