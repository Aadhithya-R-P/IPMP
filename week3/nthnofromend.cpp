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
//O(n) SC n TC
int getNthFromLast(Node *head, int n)
{
       // Your code here
       stack<int> s;
       Node *a=head;int c=0;
       while(a!=NULL)
       {
           s.push(a->data);
           a=a->next;
           c++;
       }
       int ans;
       if(n<=c)
       {
           while(n>0)
           {
                ans = s.top();
                s.pop();
                n--;
           }
       }
       else
       {
           ans=-1;
       }
       return ans;
}
//O(n) TC and O(1)SC
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *a=head,*b=head;
       for(int i=1;i<n;i++)
       {
           a=a->next;
           if(a == NULL)    return -1;
       }
       
       while(a!=NULL && a->next!=NULL)
       {
           a=a->next;
           b=b->next;
       }
       return b->data;
}