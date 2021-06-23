int solve(vector<int>& a,int start,int k){
        if(a.size()==1)
            return a[0];
        start=(start+k-1)%a.size();
        a.erase(a.begin()+start);
        solve(a,start,k);
    }
    int safePos(int n, int k) {
        vector<int> a;
        for(int i=1;i<=n;i++)
            a.push_back(i);
        return solve(a,0,k);
    }
