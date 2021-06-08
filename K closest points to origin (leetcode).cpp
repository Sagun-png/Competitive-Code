vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<float,int> arr; vector<vector<int>>ans;
        for(int i=0;i<points.size();i++){
                arr.insert({sqrt(pow(points[i][0],2)+pow(points[i][1],2)),i});
        }
        
        for(auto& it:arr){
            if(k!=0){
                ans.push_back(points[it.second]); k--;}
            else break;
        }
        return ans;
    }
