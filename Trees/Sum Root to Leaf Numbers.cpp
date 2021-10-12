vector<int> tmp;
    vector<vector<int>> v, ans;
    void solve(TreeNode* root){
        if(!root)
            return;
        tmp.push_back(root->val);
        if(root->left){
            solve(root->left);
        }
        if(root->right){
            solve(root->right);
        }
        if(!root->left && !root->right){
            v.push_back(tmp);
        }
        tmp.pop_back();
    }
    
    int sumNumbers(TreeNode* root) {
        solve(root);
        int val, ans=0;
        for(int i=0;i<v.size();i++){
            val=0;
            for(int j=0;j<v[i].size();j++){
                val=val*10+v[i][j];
            }
            ans+=val;
        }
        return ans;     
    }
