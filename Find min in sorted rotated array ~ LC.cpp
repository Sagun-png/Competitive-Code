int findMin(vector<int>& nums) {
        int n=nums.size();
        if(nums[0]<=nums[n-1])
            return nums[0];
        int i=0,j=n-1;
        while(i<=j){
            if(nums[i]<=nums[j])
                return nums[i];
            int mid=i+(j-i)/2;
            int prev=(mid+n-1)%n;
            int nxt=(mid+1)%n;
            if(nums[mid]<nums[prev] && nums[mid]<nums[nxt])
                return nums[mid];
            else if(nums[i]<=nums[mid])
                i=mid+1;
            else if(nums[mid]<=nums[j])
                j=mid-1;
        }
        return 0;
    }
