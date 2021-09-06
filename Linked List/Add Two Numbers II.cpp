ListNode* reverse(ListNode* l){
        ListNode* current = l;
        ListNode *prev = nullptr, *next = nullptr;
 
        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        l = prev;
        return l;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);

        l2 = reverse(l2);
        
        ListNode* result = nullptr;
        ListNode* t = result;
        int carry = 0;
        while(l1 != nullptr && l2 != nullptr){
            int sum = l1->val + l2->val + carry;
            carry = (sum>9)?1:0;
            ListNode* node = new ListNode(sum%10);
            if(result == nullptr){
                result = node;
                t = result;
            }
            else{
                t->next = node;
                t = node;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if(l1 == nullptr && l2 != nullptr){
            while(l2 != nullptr){
                int sum = l2->val + carry;
                carry = (sum>9)?1:0;
                ListNode* node = new ListNode(sum%10);
                t->next = node;
                t = node;
                l2 = l2->next;
            }
        }
        if(l2 == nullptr && l1 != nullptr){
            while(l1 != nullptr){
                int sum = l1->val + carry;
                carry = (sum>9)?1:0;
                ListNode* node = new ListNode(sum%10);
                t->next = node;
                t = node;
                l1 = l1->next;
            }
        }
        if(carry){
            ListNode* node = new ListNode(carry);
            t->next = node;
            t = node;
        }
        
        result = reverse(result);
        
        return result;
    }
