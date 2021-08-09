bool search(vector<vector<int>> mat, int n, int m, int x) 
    {
        int i=0, j=m-1;
        while(i<n && j>=0){
            if(mat[i][j]==x)
                return true;
            else if(mat[i][j]<x)
                i++;
            else
                j--;
        }
        return false;
    }
