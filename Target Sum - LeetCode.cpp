int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int t[N+1][W+1];
        for(int i=0;i<=N;i++){
            for(int j=0;j<=W;j++){
                if(i==0||j==0)
                    t[i][j]=0;
                else if(wt[i-1]<=j)
                    t[i][j]=max(val[i-1]+t[i][j-wt[i-1]], t[i-1][j]);
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[N][W];
    }
