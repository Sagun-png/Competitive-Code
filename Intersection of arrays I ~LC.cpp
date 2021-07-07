vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp; vector<int>v;
        if(nums1.size()<=nums2.size()){
            sort(nums2.begin(),nums2.end());
            for(int i=0;i<nums1.size();i++){
                if(mp[nums1[i]]!=0)
                    continue;
                int lo=0,hi=nums2.size()-1;
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    if(nums1[i]==nums2[mid]){
                        mp[nums1[i]]++;
                        break;
                    }
                    else if(nums1[i]>nums2[mid])
                        lo=mid+1;
                    else
                        hi=mid-1;
                }
            }
        }
        else{
            sort(nums1.begin(),nums1.end());
            for(int i=0;i<nums2.size();i++){
                if(mp[nums2[i]]!=0)
                    continue;
                int lo=0,hi=nums1.size()-1;
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    if(nums1[mid]==nums2[i]){
                        mp[nums2[i]]++;
                        break;
                    }
                    else if(nums2[i]>nums1[mid])
                        lo=mid+1;
                    else
                        hi=mid-1;
                }
            }
        }
        for(auto &it:mp)
            if(it.second!=0)
                v.push_back(it.first);
        return v;
    }
