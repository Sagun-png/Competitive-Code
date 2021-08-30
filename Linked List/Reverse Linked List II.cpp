ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL || head->next==NULL)
            return head;
        right=right-left+1;
        left-=1; int k=0,cnt=0;
        ListNode* tmp;
        for(tmp=head;tmp!=NULL;cnt++,tmp=tmp->next);
        ListNode *p=NULL,*t=head;
        while(t!=NULL){
            if(left==k){
                int cur_len=0;
                ListNode *prev=NULL,*srt=t,*cur=t,*nxt;
                while(cur_len<right){
                    nxt=cur->next;
                    cur->next=prev;
                    prev=cur;
                    cur=nxt;
                    cur_len++;
                }
                if(p!=NULL)
                    p->next=prev;
                srt->next=cur;
                if(cnt==right || left==0)
                    return prev;
                break;
            }
            k++;
            p=t;
            t=t->next;
        }
        
        return head;
    }
