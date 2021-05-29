//Using unordered map
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mark;
        for(int i=0;i<nums.size();i++)
        {
          if(mark.find(target-nums[i])!=mark.end())
            {
             return {i,mark[target-nums[i]]};
            }
            mark[nums[i]]=i;
        }
        return {};
    }
