int intersectPoint(Node* head1, Node* head2)
{
    Node *t,*p; int cnt1=0, cnt2=0;
    for(t=head1;t!=NULL;cnt1++,t=t->next);
    for(t=head2;t!=NULL;cnt2++,t=t->next);
    
    int k = abs(cnt1-cnt2);
    t = cnt1>cnt2?head1:head2;
    p = cnt1>cnt2?head2:head1;
    while(k--)
    {
        t=t->next;
    }
    while(p!=t)
    {
        p=p->next;
        t=t->next;
    }
    return p->data;
}
