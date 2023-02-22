#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
};


//iterative
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *prev=NULL,*current=head,*next;
        while(current)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        }
        head=prev;
        return head;
    }
};

//recursion
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(!head||!head->next)  return head;
        Node *rest = reverseList(head->next);
        
        head->next->next=head;
        head->next=NULL;
        
        return rest;
    }
    
};