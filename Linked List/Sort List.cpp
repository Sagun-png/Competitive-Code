ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *last,*trac,*l,*prev,*start=new ListNode();
        ListNode* tmp=new ListNode(head->val);
        start->next=tmp; last=tmp;
        head=head->next;
        while(head!=NULL){
            int flg=0; trac=head->next;
            if(last->val<head->val){
                last->next=head;
                head->next=NULL;
                last=head;
            }
            else{
                for(prev=start,l=tmp;l!=NULL;prev=l,l=l->next){
                    if(head->val<l->val){
                        head->next=l;
                        prev->next=head;
                        tmp=start->next;
                        flg=1;
                        break;
                    }
                }
                if(flg==0){
                    prev->next=head;
                    head->next=NULL;
                }
            }
            head=trac;
        }
        return start->next;
    }
