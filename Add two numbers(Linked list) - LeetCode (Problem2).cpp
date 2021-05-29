ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int cal,carry=0; ListNode *l3=NULL,*last;
        while(l1!=NULL && l2!=NULL)
        {
            ListNode* t= new ListNode;
            t->next = NULL;
            cal=(l1->val)+(l2->val)+carry;
            carry=cal/10;
            t->val=cal%10;
            if(l3==NULL)
                last=l3=t;
            else{
            last->next=t;
            last=t;
            }
            l1=l1->next; l2=l2->next;
        }
        while(l1!=NULL){
            ListNode* t= new ListNode;
            t->next = NULL;
            cal=(l1->val)+carry;
            carry=cal/10;
            t->val=cal%10;
            last->next=t;
            last=t;
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode* t= new ListNode;
            t->next = NULL;
            cal=(l2->val)+carry;
            carry=cal/10;
            t->val=cal%10;
            last->next=t;
            last=t;
            l2=l2->next;
        }
        if(carry!=0){
            ListNode* t= new ListNode;
            t->next = NULL;
            t->val=carry;
            last->next=t;
            last=t;
        }
        return l3;
    }
