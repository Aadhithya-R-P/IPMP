class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(!head||!head->next)  return head;
        Node *temp=head,*rest=pairWiseSwap(head->next->next);
        head=head->next;
        head->next=temp;
        temp->next=rest;
        return head;
    }
};
