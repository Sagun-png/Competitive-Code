int get_len(ListNode* head){
        int len=0;
        ListNode* l= head;
        while(l){
            l=l->next;
            len++;
        }
        return len;
    }
    
    ListNode* reverse(ListNode* h){
        int len=get_len(h);
        if(len==0)return NULL;
        if(len==1)return h;
        ListNode *prev, *curr, *nxt;
        prev=NULL;
        curr=h;
        nxt=h->next;
        
        while(curr){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            if(nxt!=NULL)nxt=nxt->next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        int len = get_len(head);
        ListNode* l= head;
        int i=1;
        l=head;
        while(i<len/2){
            l=l->next;
            i++;
        }
        
        ListNode* r = reverse(l->next);
  
        l->next=NULL;
        
        l=head;
        
      while(l && r){
            ListNode* tmp = l->next;
            l->next=r;
            l=tmp;
            tmp=r->next;
            if(l!=NULL)r->next=l;
            r=tmp;
        }
    }
