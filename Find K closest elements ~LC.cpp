vector<int> near(vector<int>& arr, int lt, int rt, int k,int x){
        vector<int> v;
        if(rt==-1){
            while(k){
                v.push_back(arr[lt--]);
                k--;
            }
            sort(v.begin(),v.end());
            return v;
        }
        if(lt==-1){
            while(k){
                v.push_back(arr[rt++]);
                k--;
            }
            return v;
        }
        if(lt==rt){
            v.push_back(arr[lt]);
            k--;
            lt-=1;
            rt+=1;
        }
        while(k){
            if(lt>=0 && abs(arr[lt]-x)<=abs(arr[rt]-x)){
                v.push_back(arr[lt]);
                k--;
                lt--;
            }else{
                v.push_back(arr[rt]);
                k--;
                rt++;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int i=0,j=n-1,rt=-1,lt=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]==x){
                rt=mid; break;
            }
            else if(arr[mid]>x){
                rt=mid;
                j=mid-1;
            }
            else if(arr[mid]<x)
                i=mid+1;
        }
        
        i=0,j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(arr[mid]==x){
                lt=mid; break;
            }
            else if(arr[mid]>x)
                j=mid-1;
            else if(arr[mid]<x){
                lt=mid;
                i=mid+1;
            }
        }
        
        return near(arr,lt,rt,k,x);
    }
