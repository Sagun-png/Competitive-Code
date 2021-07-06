int findPeakElement(vector<int>& nums) {
        int i=0,j=nums.size()-1; int n=nums.size();
        if(n==1)
            return 0;
        if(n==2){
            if(nums[0]>nums[1])
                return 0;
            else
                return 1;
        }
        while(i<=j){
            int mid=i+(j-i)/2;
            int prev=(mid+n-1)%n;
            int next=(mid+1)%n;
            if(mid==n-1){
                if(nums[mid]>nums[mid-1])
                    return mid;
                else
                    j=mid-1;
            }
            else if(mid==0){
                if(nums[mid]>nums[mid+1])
                    return mid;
                else
                    i=mid+1;
            }
            else if(nums[mid]>nums[prev] && nums[mid]>nums[next])
                return mid;
            else if(nums[mid]<nums[mid+1])
                i=mid+1;
            else
                j=mid-1;
        }
        return 0;
    }
