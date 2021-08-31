bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
            return false;
        ListNode *fast=head;
        ListNode *slow=head;
        fast=fast->next;
        while(fast!=NULL ||slow!=NULL){
            if(fast==slow)
                return true;
            if(fast->next==NULL)
                return false;
            fast=fast->next->next;
            slow=slow->next;
        }
        return false;
    }
