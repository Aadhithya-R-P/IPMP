#include <bits/stdc++.h>

using namespace std;

class Node
{
	public:
	int data;
	Node* next;
};

void printReverse(Node *head)
{
    if(!head)   return;
    int a=head->data;
    printReverse(head->next);
    cout<<a<<" ";
}