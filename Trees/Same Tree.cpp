int l,r,ans=1;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
            return 1;
        if((!p && q) || (p && !q))
            return 0;
        ans*= isSameTree(p->left, q->left);
        if(p->val!=q->val)
            ans*= 0;
        ans*= 1;
        ans*= isSameTree(p->right, q->right);
        
        return ans;
    }
