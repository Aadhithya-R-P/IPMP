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

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *fast=head,*slow=head,*prev=NULL,*current=head,*next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        while(slow)
        {
            next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        slow=prev;
        
        while(slow && current)
        {
            if(current->data == slow->data)
            {
                current=current->next;
                slow=slow->next;
            }
            else    return false;
        }
        return true;
    }
};