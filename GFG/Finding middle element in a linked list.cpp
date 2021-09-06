int getMiddle(Node *head)
{
    Node *t; int pos,cnt=0;
    for(t=head;t!=NULL;cnt++,t=t->next);
    pos=(cnt/2)+1;
    for(t=head;pos!=0;t=t->next){
        pos--;
        if(pos==0)
            return t->data;
    }
}
