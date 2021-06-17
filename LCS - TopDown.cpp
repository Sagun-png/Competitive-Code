int lcs(int x, int y, string s1, string s2)
    {
        int t[x+1][y+1];
        memset(t,-1,sizeof(t));
        // your code here
        for(int i=0;i<=y;i++)
            t[0][i]=0;
        for(int j=0;j<=x;j++)
            t[j][0]=0;
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j], t[i][j-1]);
            }
        }
        return t[x][y];
    }
