//Got TLE
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

Node *flatten(Node *root)
{
   // Your code here
   if(!root || !root->next) return root;
   root->next = flatten(root->next);
   root = merge(root,root->next);
   return root;
}
