int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr, arr+n);
        
        int count = 0;
        
        for(int c = n-1; c >= 2; c--)
        {
            int a = 0, b = c - 1;
            
            while(a < b)
            {
                if(arr[a] + arr[b] > arr[c])
                {
                    count += b - a;
                    
                    b--;
                }
                else
                {
                    a++;
                }
            }
        }
        
        return count;
    }
