#include <bits/stdc++.h>

using namespace std;

//recursion
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head||!head->next||!head->next->next)    return;
        ListNode *penultimate = head;
        while(penultimate->next->next!=NULL)
        {
            penultimate=penultimate->next;
        }

        penultimate->next->next = head->next;
        head->next = penultimate->next;
        penultimate->next = NULL;
        reorderList(head->next->next);
    }
};

//Best approach
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head)   return;
        ListNode *slow=head,*fast=head,*prev=NULL,*next,*temp=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next)  slow=slow->next;
        while(slow)
        {
            next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        slow=prev;
        while(head && slow)
        {
            temp=head->next;
            prev=slow->next;
            head->next=slow;
            slow->next=temp;
            head=temp;
            slow=prev;
        }

        if(head && head->next)  head->next->next = NULL;
    }
};