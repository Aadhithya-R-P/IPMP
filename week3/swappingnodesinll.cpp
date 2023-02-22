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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *a=head,*b=head,*temp;
        for(int i=1;i<k;i++)
        {
            a=a->next;
        }
        temp=a;
        while(a->next!=NULL && a!=NULL)
        {
            b=b->next;
            a=a->next;
        }
        swap(b->val,temp->val);
        return head;
    }
};