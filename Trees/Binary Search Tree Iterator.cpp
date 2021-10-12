int i=0;
    vector<int> inord;
    void inorder(TreeNode* root){
        if(!root){
            return;
        }
        inorder(root->left);
        inord.push_back(root->val);
        inorder(root->right);
        return;
    }
    
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        return inord[i++];
    }
    
    bool hasNext() {
        if(i < inord.size()){
            return true;
        }
        return false;
    }
