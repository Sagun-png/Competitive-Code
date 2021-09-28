vector<long long int> v;
    void fetch(TreeNode* root){
        if(!root)
            return;
        fetch(root->left);
        v.push_back(root->val);
        fetch(root->right);
    }
    
    int i = 0; 
    void correct(TreeNode* root){
        if(!root)
            return;
        correct(root->left);
        root->val = v[i];
        i++;
        correct(root->right);
    }
    
    void recoverTree(TreeNode* root) {
        fetch(root);
        sort(v.begin(), v.end());
        correct(root);
    }
