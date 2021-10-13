bool recreationalSpot(int arr[], int n){
		int leftMin[n];
	    leftMin[0] = arr[0];
	    for(int i=1;i<n;i++) {
	        leftMin[i]=min(arr[i],leftMin[i-1]);
	    }
	    stack<int>s;
	    for(int i=n-1;i>=0;i--)
	    {
	        if(s.empty()) s.push(arr[i]);
	        else
	        {
	            while(!s.empty() && leftMin[i]>=s.top()) 
	                s.pop();
	            
	            if(!s.empty()) 
	                if(leftMin[i]<arr[i] && arr[i]>s.top()) 
	                    return true;
	            
	            s.push(arr[i]);
	        }
	    }
	    return false;
	}
