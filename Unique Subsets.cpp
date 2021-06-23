void solve(vector<int> arr, vector<int>& pt, set<vector<int>>& ans){
        if(arr.size()==0){
            ans.insert(pt);
            return;
        }
        vector<int>op1=pt;
        vector<int>op2=pt;
        op2.push_back(arr[0]);
        arr.erase(arr.begin()+0);
        solve(arr,op1,ans);
        solve(arr,op2,ans);
    }
    
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        // code here 
        set<vector<int>>ans; vector<int>pt;
        sort(arr.begin(),arr.end());
        solve(arr,pt,ans);
        vector<vector<int>> res;
        for(auto x: ans)
            res.push_back(x);
        return res;
    }
