vector<TreeNode*>rec(int start,int end){
    
    if(start>end){
        return {NULL};
    }
    
    if(start==end){
        return {new TreeNode(start)};
    }
    
    vector<TreeNode*>res;
    
    for(int i=start;i<=end;i++){
        
        vector<TreeNode*>left=rec(start,i-1);
        vector<TreeNode*>right=rec(i+1,end);
        
        for(auto l:left){
            
            for(auto r:right){
                
                res.push_back(new TreeNode(i,l,r));
                
            }
            
        }
        
    }
    
    return res;
    
}

vector<TreeNode*> generateTrees(int n) {
    
    vector<TreeNode*>result=rec(1,n);
    
    return result;
    
}
