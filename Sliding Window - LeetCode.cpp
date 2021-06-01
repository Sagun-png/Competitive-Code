vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector <double> ans; multiset <long long int, greater<long long int>> s;
        for(long int i=0;i<=nums.size()-k;i++){
            if(s.empty()){
                for(long int j=i;j<k+i;j++){
                    s.insert(nums[j]);
                }
            }
            else{
                s.insert(nums[i+k-1]);
            }
            auto it=s.begin();
            advance(it,(k/2));
            if(k%2!=0)
                ans.push_back(*it);
            else{
                auto it1=s.begin();
                advance(it1,(k/2-1));
                ans.push_back((double)((*it1)+(*it))/2);
            }
            s.erase(s.find(nums[i]));
        }
        return ans;
    }
