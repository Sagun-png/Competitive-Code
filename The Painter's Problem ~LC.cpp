bool isValid(int arr[], int n, int m, long long int mx){
        long int ptr=1; 
        long long int sum=0;
        for(long int i=0;i<n;i++)
        {
            sum += arr[i];
            if(sum > mx)
            {
                ptr++;
                sum = arr[i];
            }
            if(ptr > m)
            {
                return false;
            }
        }
        return true;
    }
    
    long long minTime(int arr[], int n, int m)
    {
        long long int i=0,j=0,res;
        for(long int k = 0; k < n ; k++)
        {
            if(arr[k] > i)
            {
                i = arr[k];
            }
            j += arr[k];
        }
        while(i <= j)
        {
            long long int mid=i + (j-i)/2;
            if(isValid(arr,n,m,mid) == true)
            {
                res = mid;
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        return res;
    }
