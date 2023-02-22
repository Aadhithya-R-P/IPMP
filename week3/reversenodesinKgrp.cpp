#include <bits/stdc++.h>

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head||!head->next)  return head;
        int c=0;
        ListNode *curr=head,*count=head,*front=head,*prev=NULL,*next,*rest,*start=head;
        while(count)
        {
            count=count->next;
            c++;
        }
        if(c<k) return head;
        for(int i=0;i<k;i++)
        {
            if(!curr)
            {
                curr=NULL;
                break;
            }
            curr=curr->next;
        }
        rest=curr;
        while(front!=curr)
        {
            next=front->next;
            front->next=prev;
            prev=front;
            front=next;
        }
        head=prev;
        start->next=reverseKGroup(rest,k);
        return head;
    }
};