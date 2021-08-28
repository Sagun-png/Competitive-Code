ListNode* aux(ListNode* head, ListNode* temp){
        if(temp==NULL)
            return head;
        ListNode* forw=temp->next;
        temp->next=head;
        return aux(temp,forw);
    }
    
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp=head->next;
        head->next=NULL;
        return aux(head,temp);
    }
