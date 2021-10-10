int solve(TreeNode* root){
        int l=0, r=0;
        if(!root)
            return 0;
        if(root->left)
            l=1+solve(root->left);
        if(root->right)
            r=1+solve(root->right);
        
        if(l!=0 && r==0)
            return l;
        else if(l==0 && r!=0)
            return r;
        else
            return min(l,r);
    }
    
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int num1=solve(root);
        return num1+1;
    }
