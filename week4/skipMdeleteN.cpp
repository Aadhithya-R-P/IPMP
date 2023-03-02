class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //Add code here
        if(!head)   return;
        Node *curr = head,*prev;
        int m=M,n=N;
        while(curr)
        {
            while(m && curr)
            {
                prev=curr;
                curr=curr->next;
                m--;
            }
            if(!curr)   return;
            while(n && curr)
            {
                curr=curr->next;
                n--;
            }
            prev->next = curr;
            m=M,n=N;
        }
    }
};
