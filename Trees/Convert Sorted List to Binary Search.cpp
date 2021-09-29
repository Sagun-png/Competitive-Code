TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v;
        if(!head) return nullptr;
        while(head!=NULL){
            v.push_back(head->val);
            head = head -> next;
        }
        return makeTree(v, 0, v.size());
    }
    
    TreeNode* makeTree(vector<int>& v, int start, int end){
        if(end<=start)
            return nullptr;
        int mid = start + (end-start)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = makeTree(v, start, mid);
        root->right = makeTree(v, mid+1, end);
        
        return root;
    }
