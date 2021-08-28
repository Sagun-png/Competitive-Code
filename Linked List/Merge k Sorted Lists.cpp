ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *t,*ans=NULL; vector<int> v;
        for(int i=0;i<lists.size();i++){
            for(t=lists[i];t!=NULL;t=t->next){
                v.push_back(t->val);
            }
        }
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++){
            ListNode *p=new ListNode();
            p->val=v[i];
            p->next=NULL;
            if(ans==NULL){
                ans=p;
                continue;
            }
            p->next=ans;
            ans=p;
        }
        return ans;
    }
