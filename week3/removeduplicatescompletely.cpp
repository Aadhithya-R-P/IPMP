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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *a=head,*prev=NULL;
        while(a!=NULL && a->next!=NULL)
        {
            if(a->val == a->next->val)
            {
                while(a->next!=NULL && a->val == a->next->val)//This shortcircuit gave error.So 1st check whether its null and then compare.
                {
                    a=a->next;
                }
                if(!prev)
                {
                    head=a->next;
                }
                else
                {
                    prev->next = a->next;
                }
                a=a->next;
            }
            else
            {
                prev=a;
                a=a->next;
            }
        }
        return head;
    }
};