vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        int prf[n]; vector<int> v;
        prf[0]=arr[0];
        for(int i=1;i<n;i++)
            prf[i]=prf[i-1]^arr[i];
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0) v.push_back(prf[r]);
            else v.push_back(prf[r]^prf[l-1]);
        }
        return v;
    }
