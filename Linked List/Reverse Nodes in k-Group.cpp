int length (ListNode* head){
        int ans = 0;
        while(head != NULL){
            ans++;
            head = head->next;
        }
        return ans;
    }
    ListNode* reverse(ListNode* head ,int len, int k){
        if (head == NULL or head->next == NULL)return head;
        if(k > len) return head;
        ListNode* prev = NULL,*curr = head, *nextptr;
        int curr_len = 0;
        while (curr_len<k and curr != NULL){
            nextptr = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextptr;
            curr_len++;
        }
        head->next = reverse(curr,len-k,k);
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == nullptr or head->next == NULL){
            return head;
        }
        int len = length(head);
        ListNode* ptr = reverse(head,len,k);
        return ptr;
    }
