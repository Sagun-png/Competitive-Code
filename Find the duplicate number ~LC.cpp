int findDuplicate(vector<int>& nums) {
        if(nums.size()<=2) return nums[0];
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0,j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if((mid-1>=0 && nums[mid]==nums[mid-1]) || (mid+1<=n-1 && nums[mid]==nums[mid+1]))
                return nums[mid];
            else if((nums[mid]-nums[i])>=(nums[j]-nums[mid]))
                i=mid+1;
            
            else
                j=mid-1;
        }
        return 0;
    }
