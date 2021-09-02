ListNode* removeElements(ListNode* head, int val) {
        ListNode *l,*ans,*t;
        t=head;
        ans=new ListNode(); ans=NULL;
        while(t!=NULL){
            if(t->val!=val){
                ListNode* p=new ListNode(t->val);
                if(ans==NULL){
                    l=ans=p;
                    t=t->next;
                    continue;
                }
                l->next=p;
                l=p;
            }
            t=t->next;
        }
        return ans;
    }
