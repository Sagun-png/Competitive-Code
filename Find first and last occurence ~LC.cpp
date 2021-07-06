vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(); vector<int> v;
        int i=0, j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                int low=mid;
                int high=mid;
                while(low>0 && nums[low-1]==target)
                    low--;
                v.push_back(low);
                while(high<n-1 && nums[high+1]==target)
                    high++;
                v.push_back(high);
                return v;
            }
            else if(nums[mid]>target)
                j=mid-1;
            else if(nums[mid]<target)
                i=mid+1;
        }
        v.push_back(-1); v.push_back(-1);
        return v;
    }
