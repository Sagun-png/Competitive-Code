    int ans = 1;
    int solve(TreeNode* root){
        int l = 0, r = 0;
        if(!root)
            return 0;
        if(root->left)
            l=1+solve(root->left);
        if(root->right)
            r=1+solve(root->right);
        
        if(abs(l-r)>1)
            ans*=0;
        return max(l,r);
    }
    
    bool isBalanced(TreeNode* root) {
        if(!root) return 1;
        solve(root);
        
        return ans;
    }
