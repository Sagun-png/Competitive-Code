vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> tmp;
            int len = q.size();
            while(len--){
                TreeNode* c = q.front();
                tmp.push_back(c->val);
                q.pop();
                if(c->left)
                    q.push(c->left);
                if(c->right)
                    q.push(c->right);
            }
            v.push_back(tmp);
        }
        reverse(v.begin(),v.end());
        return v;
    }
