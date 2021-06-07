vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int a[10001]={0},max=0;
        for(int i=0;i<intervals.size();i++)
            if(intervals[i][1]>max)
                max=intervals[i][1];
        for(int i=0;i<intervals.size();i++){
                a[intervals[i][0]]+=1;
                a[intervals[i][1]]-=1;
        }
        int flag=0,start=-1,end,cnt=0;
        for(int i=0;i<=max;i++){
            if(a[i]>=1){
                cnt+=a[i]; flag=1; 
                if(start==-1)
                    start=i;
            }
            else if(a[i]<=-1){
                cnt+=a[i]; end=i;
            }
            if(cnt==0 && flag==1){
                ans.push_back({start,end}); flag=0; start=-1;
            }
        }
        int i,j;
        for(i=0;i<intervals.size();i++){
            if(a[intervals[i][0]]==a[intervals[i][1]]){
                for(j=0;j<ans.size();j++){
                    if(intervals[i][0]>=ans[j][0] && ans[j][1]>=intervals[i][0])
                        break;
                }
                if(j==ans.size())
                    ans.push_back({intervals[i][0],intervals[i][0]});
            }
        }
        return ans;
    }
