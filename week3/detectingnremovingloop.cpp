#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(!head||!head->next)  return;
        Node *fast=head,*slow=head;
        slow = slow->next;
        fast=fast->next->next;
        while(fast&&fast->next)
        {
            if(slow == fast)    break;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(slow == fast)
        {
            slow = head;
            if(slow == fast)
            {
                while(fast->next!=slow)
                {
                    fast=fast->next;
                }
            }
            else
            {
                while(slow->next!=fast->next)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
            }
            fast->next = NULL;
        }
        return;
    }
};