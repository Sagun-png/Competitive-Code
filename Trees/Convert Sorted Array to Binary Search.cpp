TreeNode* sortedArrayToBST(vector<int>& nums) {
        return makeTree(nums, 0, nums.size());    
    }
    
    TreeNode* makeTree(vector<int>& nums, int start, int end)
    {
        if(end<=start)
            return NULL;
        int mid=start+(end-start)/2;
        TreeNode *root=new TreeNode(nums[mid]);
        root->left=makeTree(nums,start, mid);
        root->right=makeTree(nums,mid+1, end);
        return root;
    }
