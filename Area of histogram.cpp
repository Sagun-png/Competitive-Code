#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={6,2,5,4,5,1,6}, width[7], area[7], n=7, ind, max=0;
    vector<int> left;
    stack <pair<int,int>> s; ind=-1;
    for(int i=0;i<n;i++){
        if(s.size()==0)
            left.push_back(ind);
        else if(s.size()>0 && arr[i]>s.top().first)
            left.push_back(s.top().second);
        else if(s.size()>0 && arr[i]<=s.top().first){
            while(s.size()>0 && arr[i]<=s.top().first)
                s.pop();
            if(s.size()==0)
                left.push_back(ind);
            else
                left.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }


    stack <pair<int,int>>r;
    vector<int> right; ind=n;
    for(int i=n-1;i>=0;i--){
        if(r.size()==0)
            right.push_back(ind);
        else if(r.size()>0 && arr[i]>r.top().first)
            right.push_back(r.top().second);
        else if(r.size()>0 && arr[i]<=r.top().first){
            while(r.size()>0 && arr[i]<=r.top().first)
                r.pop();
            if(r.size()==0)
                right.push_back(ind);
            else
                right.push_back(r.top().second);
        }
        r.push({arr[i],i});
    }
    reverse(right.begin(),right.end());


    for(int i=0;i<n;i++){
        width[i]=right[i]-left[i]-1;
        area[i]=arr[i]*width[i];
        if(area[i]>max)
            max=area[i];
    }
    cout<<max;
}
