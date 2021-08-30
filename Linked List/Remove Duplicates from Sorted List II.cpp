ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode* t;
        ListNode* ans=new ListNode();
        ans=NULL;
        t=head;
        while(t!=NULL){
            if(mp[t->val]!=-1)
                mp[t->val]++;
            if(mp[t->val]>1)
                mp[t->val]=-1;
            t=t->next;
        }
        for(auto it=mp.rbegin();it!=mp.rend();++it){
            if(it->second==1){
                ListNode* tp=new ListNode();
                tp->val = it->first;
                tp->next==NULL;
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
