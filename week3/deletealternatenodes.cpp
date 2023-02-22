#include <bits/stdc++.h>

using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};

void deleteAlt(struct Node *head){
    // Code here
    Node *curr=head;
    while(curr&&curr->next)
    {
        curr->next = curr->next->next;
        curr=curr->next;
    }
    
    return;
}