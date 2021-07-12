vector<int> getRow(int row) {
        vector<int> tmpr={1}; vector<int> v;
        int k=0;
        while(k!=row){
            for(int i=0;i<=k+1;i++){
                if(i==0 || i==k+1)
                    v.push_back(1);
                else
                    v.push_back(tmpr[i-1]+tmpr[i]);
            }
            tmpr=v;
            k++;
            v.clear();
        }
        return tmpr;
    }
