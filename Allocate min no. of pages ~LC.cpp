bool isvalid(int arr[],int n,int m,int mx){
        int st=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>mx){
                st++;
                sum=arr[i];
            }
            if(st>m)
                return false;
        }
        return true;
    }
    
    int findPages(int arr[], int n, int m) 
    {
        if(n<m) return -1;
        int i=0,j=0,res=-1;
        for(int k=0;k<n;k++){
            if(arr[k]>i)
                i=arr[k];
            j+=arr[k];
        }
        while(i<=j){
            int mx=i+(j-i)/2;
            if(isvalid(arr,n,m,mx)==true){
                res=mx;
                j=mx-1;
            }
            else
                i=mx+1;
        }
        return res;
    }
