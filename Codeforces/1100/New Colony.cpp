#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int i,flg=0;
        while(k){
            for(i=0;i<n-1;i++)
                if(a[i]<a[i+1]){
                    a[i]+=1; break;
                }
            if(i==n-1){
                cout<<"-1"<<"\n";
                flg=1;
                break;
            }
            k--;
        }
        if(flg!=1)
            cout<<i+1<<"\n";
    }
}
