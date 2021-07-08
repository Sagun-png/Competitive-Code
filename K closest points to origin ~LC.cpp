vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> pq;
        for(int i=0;i<points.size();i++){
            pq.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            if(pq.size()>k)
                pq.pop();
        }
        vector<vector<int>> v;
        while(pq.size()>0){
            vector<int> tmp;
            tmp.push_back(pq.top().second.first);
            tmp.push_back(pq.top().second.second);
            v.push_back(tmp);
            pq.pop();
        }
        return v;
    }
