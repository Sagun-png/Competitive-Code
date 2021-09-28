bool solve(TreeNode* l, TreeNode* r){
        if(!l && !r)
            return 1;
        if((!l && r) || (l && !r))
            return 0;
        ans*= solve(l->left, r->right);
        if(l->val!=r->val)
            ans*= 0;
        ans*= 1;
        ans*= solve(l->right, r->left);
        
        return ans;
    }
    
    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right)
            return 1;
        return solve(root->left, root->right);
    }
