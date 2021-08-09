int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int i=0,j=m-1,ind=-1;
	    while(i<n && j>=0){
	        if(arr[i][j]==1){
	            j--; ind=i;}
	        else
	            i++;
	    }
	    return ind;
	}
