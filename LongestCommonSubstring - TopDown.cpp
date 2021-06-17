int longestCommonSubstr (string S1, string S2, int x, int y)
    {
        // your code here
        int t[x+1][y+1], max=0;
        memset(t,-1,sizeof(t));
        // your code here
        for(int i=0;i<=y;i++)
            t[0][i]=0;
        for(int j=0;j<=x;j++)
            t[j][0]=0;
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(S1[i-1]==S2[j-1]){
                    t[i][j]=1+t[i-1][j-1];
                    if(t[i][j]>max)
                        max=t[i][j];
                }
                else{
                    if(max<t[i][j])
                        max=t[i][j];
                    t[i][j]=0;
                }
            }
        }
        return max;
    }
