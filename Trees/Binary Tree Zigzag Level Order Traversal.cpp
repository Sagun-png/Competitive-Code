vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;
        queue<TreeNode*> q;
        
        q.push(root);
        int rev = 0;
        while(!q.empty()) {
            vector<int> tmp;
            int len = q.size();
            while(len--){
                TreeNode* c = q.front();
                q.pop();
                tmp.push_back(c->val);
                if(c->left)
                    q.push(c->left);
                if(c->right)
                    q.push(c->right);
            }
            if(rev) reverse(tmp.begin(), tmp.end());
            v.push_back(tmp);
            rev = rev==1 ? 0 : 1;
        }
        return v;
    }
