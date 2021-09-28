vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
           int len = q.size();
            vector<int> res2;
            while(len--){
               
               TreeNode* curr = q.front(); q.pop();
               res2.push_back(curr->val);
               
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
           } 
            res.push_back(res2);
        }
        return res;
    }
