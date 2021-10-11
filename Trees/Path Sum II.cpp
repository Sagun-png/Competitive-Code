vector<int> tmp;
    vector<vector<int>> v, ans;
    void solve(TreeNode* root){
        int flg = 1, l = 0;
        if(!root)
            return;
        tmp.push_back(root->val);
        if(root->left){
            flg = 0;
            l = 1;
            solve(root->left);
        }
        flg = 1;
        if(root->right){
            flg = 0;
            solve(root->right);
        }
        if(!root->left && !root->right){
            flg = 0;
            v.push_back(tmp);
        }
        tmp.pop_back();
        
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root);
        for(int i=0; i<v.size(); i++){
            int sum = 0;
            for(int j=0; j<v[i].size(); j++)
                sum += v[i][j];
            if(sum==targetSum)
                ans.push_back(v[i]);
        }
        return ans;
    }
