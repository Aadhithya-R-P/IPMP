class Solution{
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* merge(Node *h1,Node *h2)
    {
        Node *c1=h1,*c2=h2,*c=NULL,*head;
        while(c1 && c2)
        {
            if(c1->data >= c2->data)
            {
                if(!c)
                {
                    c=c2;
                    head=c;
                }
                else
                {
                    c->next=c2;
                    c=c->next;
                }
                c2=c2->next;
            }
            else
            {
                if(!c)
                {
                    c=c1;
                    head=c;
                }
                else
                {
                    c->next=c1;
                    c=c->next;
                }
                c1=c1->next;
            }
        }
        
        if(c1)
        {
            if(!c)  c=c1,head=c;
            else    c->next=c1;
        }
        else
        {
            if(!c)
            {
                c = c2;
                head = c;
            }
            else
            {
                c->next = c2;
            }
        }
        return head;
    }
    
    
    Node* mergeSort(Node* head) {
        if(!head || !head->next)    return head;
        Node *slow=head,*fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node *head2=slow->next;
        slow->next=NULL;
        head = mergeSort(head);
        head2 = mergeSort(head2);
        return merge(head,head2);
    }
};
