ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return head;
        if(head->next!=NULL){
            int tmp=head->val;
            head->val=head->next->val;
            head->next->val=tmp;
            swapPairs(head->next->next);
        }
        return head;
    }
