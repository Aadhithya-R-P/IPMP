#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Node* arrange(Node *head)
{
   //Code here
   Node *c=NULL,*v=NULL,*curr=head,*con=c,*vow=v;
   
   while(curr)
   {
       if(curr->data == 'a' || curr->data == 'e' || curr->data == 'i' || curr->data == 'o' ||curr->data == 'u')
       {
           if(!v)
           {
               v = curr;
               vow = v;
           }
           else
           {
               v->next = curr;
               v=v->next;
           }
       }
       else
       {
           if(!c)
           {
               c = curr;
               con = c;
           }
           else
           {
               c->next = curr;
               c=c->next;
           }
       }
       curr = curr->next;
   }
   
   if(!con) return vow;
   if(!vow) return con;
   
   head = vow;
   v->next = con;
   c->next = NULL;
   return head;
}