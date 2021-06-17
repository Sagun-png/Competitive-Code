int lcs(char* s1,char* s2,int m,int n){
        int t[m+1][n+1];
        memset(t,-1,sizeof(t));
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                if(i==0||j==0)
                    t[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                    t[i][j]=1+t[i-1][j-1];
                else
                    t[i][j]=max(t[i-1][j], t[i][j-1]);
            }
        }
        return t[m][n];
    }
    
    int shortestCommonSupersequence(char* X, char* Y, int m, int n)
    {
        //code here
        return m+n-lcs(X,Y,m,n);
    }
