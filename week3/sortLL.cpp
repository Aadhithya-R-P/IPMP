#include <bits/stdc++.h>

using namespace std;


 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};

//Normal
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)    return head;
        ListNode *temp=head,*curr=head;
        vector<int> v;
        while(curr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        sort(v.begin(),v.end());
        int i=0;
        while(temp)
        {
            temp->val = v[i++];
            temp=temp->next;
        }
        return head;
    }
};

//Tried using merge sort but kept getting Segmentation fault
class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* middle(Node *head) {
        Node *slow=head,*fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

    Node* merge(Node *h1, Node *h2) {
        Node *temp=NULL,*merged=temp;
        while(h1 && h2)
        {
            if(h1->data <= h2->data)
            {
                if(!temp)
                {
                    temp = h1;
                    merged=temp;
                }
                else
                {
                    temp->next = h1;
                    h1=h1->next;
                }
            }
            else
            {
                if(!temp)
                {
                    temp=h2;
                    merged=temp;
                }
                else
                {
                    temp->next=h2;
                    h2=h2->next;
                }
            }
            temp=temp->next;
        }

        while(h1)
        {
            if(!temp)
            {
                temp=h1;
            }
            else
            {
                temp->next=h1;
                temp=temp->next;
            }
            h1=h1->next;
        }

        while(h2)
        {
            if(!temp)
            {
                temp=h2;
            }
            else
            {
                temp->next=h2;
                temp=temp->next;
            }
            h2=h2->next;
        }
        return merged;
    }

    Node* mergeSort(Node* head) {
        if(!head || !head->next)    return head;
        Node *mid = middle(head),*head2,*ans;
        head2=mid->next;
        mid->next=NULL;

        ans = merge(mergeSort(head),mergeSort(head2));
        return ans;
    }
};