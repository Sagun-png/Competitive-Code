bool isPalindrome(ListNode* head) {
        ListNode* rev = new ListNode();
        rev=NULL;
        ListNode* t=head;
        while(t!=NULL){
            ListNode *tmp = new ListNode(t->val);
            if(rev==NULL){
                rev=tmp;
                t=t->next;
                continue;
            }
            tmp->next=rev;
            rev=tmp;
            t=t->next;
        }
        t=head;
        while(t!=NULL){
            if(t->val!=rev->val)
                return false;
            t=t->next;
            rev=rev->next;
        }
        return true;
    }
