void rotate(vector<vector<int> >& mat)
{
    int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++){
        reverse(mat[i].begin(),mat[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
}
