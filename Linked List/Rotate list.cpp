ListNode* rotateRight(ListNode* head, int k) {
        int tmp1,tmp2,cnt=0; ListNode* t;
        if(head==NULL || head->next==NULL) return head;
        for(t=head;t!=NULL;cnt++,t=t->next);
        k = k%cnt;
        for(int i=0;i<k;i++){
            tmp1=head->val;
            t=head->next;
            for(;t!=NULL;t=t->next){
                tmp2=t->val;
                t->val=tmp1;
                tmp1=tmp2;
            }
            head->val=tmp1;
        }
        return head;
    }
