struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        int cnt=0;
        struct node *prev=NULL, *curr=head, *nxtptr=NULL;
        while(cnt!=k && curr!=NULL)
        {
            nxtptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxtptr;
            cnt++;
        }
        head->next=reverse(curr,k);
        return prev;
    }
