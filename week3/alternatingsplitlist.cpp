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

void alternatingSplitList(struct Node* head) 
{
    //Your code here
    if(!head)   return;
    Node *p1=head,*p2=head->next;
    while(p1 && p1->next)
    {
        cout << p1->data << " ";
        p1=p1->next->next;
    }
    cout << endl;
    while(p2 && p2->next)
    {
        cout << p2->data << " ";
        p1=p2->next->next;
    }
    return;
}