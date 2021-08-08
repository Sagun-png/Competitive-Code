void sorthelper(vector<vector<int>> &mat, int row, int col, string Y){
    vector<int> diag;
    int i = row, j = col;
    
    while(i < mat.size() && j < mat[0].size())
        diag.push_back(mat[i++][j++]);
    
    if(Y == "asc")
        sort(diag.begin(), diag.end());
        
    else if(Y == "desc")
        sort(diag.rbegin(), diag.rend());
    
    i = row, j = col;
    int idx = 0;
    
    while(i < mat.size() && j < mat[0].size())
        mat[i++][j++] = diag[idx++];
}


void diagonalSort(vector<vector<int>> &mat, int n, int m) {
    for(int i = 1; i < m; i++)
        sorthelper(mat, 0, i, "desc");

    for(int i = 1; i < n; i++)
        sorthelper(mat, i, 0, "asc");
}
