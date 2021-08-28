ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *t,*p; int cnt=0;
        for(t=head;t!=NULL;cnt++,t=t->next);
        int pos=cnt-n;
        if(pos==0){
            head=head->next;
            return head;
        }
        for(p=0,t=head;t!=NULL;p=t,t=t->next){
            if(pos==0){
                p->next=t->next;
                return head;
            }
            pos--;
        }
        return head;
    }
