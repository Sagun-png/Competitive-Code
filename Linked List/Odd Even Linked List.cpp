ListNode* oddEvenList(ListNode* head) {
        if(head == NULL or head->next == NULL or (head->next)->next == NULL)
            return head;
        ListNode* odd = head;
        ListNode* odds = odd;
        ListNode* even = head->next;
        ListNode* eves = even;
        while(odd != NULL and even != NULL and even->next != NULL){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = eves;
        return odds;
    }
