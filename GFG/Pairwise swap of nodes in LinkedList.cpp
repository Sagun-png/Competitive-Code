struct Node* pairwise_swap(struct Node* head)
{
    struct Node *curr=head,*nxtptr=head->next;
    while(curr!=NULL && nxtptr!=NULL)
    {
        int tmp=curr->data;
        curr->data=nxtptr->data;
        nxtptr->data=tmp;
        curr=nxtptr->next;
        if(curr!=NULL)
            nxtptr=curr->next;
    }
    return head;
}
