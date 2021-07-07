vector<int> twoSum(vector<int>& num, int target) {
        int n=num.size(); vector<int> v;
        for(int k=0;k<n;k++){
            int x=target-num[k];
            int i=0,j=n-1;
            while(i<=j){
                int mid=i+(j-i)/2;
                if(num[mid]==x && mid!=k){
                    v.push_back(k+1); v.push_back(mid+1);
                    return v;
                }
                else if(num[mid]>x)
                    j=mid-1;
                else
                    i=mid+1;
            }
        }
        return v;
    }
