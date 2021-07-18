#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flg=1;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int lo=-1,hi=-1;
        for(int i=0;i<n;i++){
            if(lo==-1 && a[i]!=b[i]){
                lo=i; continue;}
            if(a[i]!=b[i])
                hi=i;
        }
        if(b[0]==n && b[n-1]==1)
            cout<<"3\n";
        else if(lo==-1)
            cout<<"0\n";
        else if(b[0]==1 || b[n-1]==n)
            cout<<"1\n";
        else
            cout<<"2\n";
        
    }
}
