#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
//Floyd's Algorithm
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node *slow=head,*fast=head;
        while(slow&&fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast)    return true;
        }
        return false;
    }
};