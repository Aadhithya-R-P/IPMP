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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)    return head;
        ListNode *rest = swapPairs(head->next->next),*temp = head;
        head=head->next;
        head->next=temp;
        temp->next = rest;
        return head;
    }
};