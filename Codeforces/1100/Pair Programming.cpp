#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n,m; vector<int> v;
        cin>>k>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]==0){
                v.push_back(a[i]); k+=1; i++; continue;}
            if(b[j]==0){
                v.push_back(b[j]); k+=1; j++; continue;}
            if(a[i]<=k){
                v.push_back(a[i]); i++;}
            else if(b[j]<=k){
                v.push_back(b[j]); j++;}
            else break;
        }
        if(i<n && j<m){
            cout<<"-1\n"; continue;
        }
        while(i<n){
            if(a[i]==0){
                v.push_back(a[i]); k+=1; i++; continue;}
            if(a[i]<=k){
                v.push_back(a[i]); i++;}
            else break;
        }
        if(i<n){
            cout<<"-1\n"; continue;
        }
        while(j<m){
            if(b[j]==0){
                v.push_back(b[j]); k+=1; j++; continue;}
            if(b[j]<=k){
                v.push_back(b[j]); j++;}
            else break;
        }
        if(j<m){
            cout<<"-1\n"; continue;
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
