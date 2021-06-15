#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v,arr={100,80,60,70,60,75,85};
    stack<pair<int,int>> s;
    for(int i=0;i<arr.size();i++){
        int cnt=1;
        if(s.size()==0)
            v.push_back(1);
        else if(s.size()>0 && s.top().first>arr[i])
            v.push_back(cnt);
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                cnt+=s.top().second; s.pop();
            }
            if(s.size()==0)
                v.push_back(1);
            else
                v.push_back(cnt);
        }
        s.push({arr[i],v.back()});
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
