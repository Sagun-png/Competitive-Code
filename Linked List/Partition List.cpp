ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
            return head;
        vector<int> v; int k=0;
        ListNode *l,*t=head;
        while(t!=NULL){
            v.push_back(t->val);
            t=t->next;
        }
        k=v.size();
        ListNode* ans=NULL;
        for(int i=k-1;i>=0;i--){
            if(v[i]>=x){
                ListNode* tp=new ListNode();
                tp->val=v[i];
                tp->next=NULL;
                if(ans==NULL){
                    ans=tp;
                    continue;
                }
                tp->next=ans;
                ans=tp;
            }
        }
        for(int i=k-1;i>=0;i--){
            if(v[i]<x){
                ListNode* tp=new ListNode();
                tp->val=v[i];
                tp->next=NULL;
                if(ans==NULL){
                    ans=tp;
                    continue;
                }
                tp->next=ans;
                ans=tp;
            }
        }
        return ans;
    }
