Node* rotate(Node* head, int k)
    {
        Node *t,*p,*l; int cnt=0;
        for(t=head;t!=NULL;l=t,cnt++,t=t->next);
        if(cnt==k)
        {
            return head;
        }
        for(p=0,t=head;t!=NULL && k!=0;k--,p=t,t=t->next);
        p->next=NULL;
        l->next=head;
        head=t;
        return head;
    }
