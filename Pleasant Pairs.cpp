#include<bits/stdc++.h>
using namespace std;

int main(){
    long int t;
    cin>>t;
    while(t--){
        long int n,cnt=0;
        cin>>n;
        long int a[n+1];
        for(long int i=1;i<=n;i++)
            cin>>a[i];
        for(long int i=1;i<=n;i++){
            for(long int j=a[i]-i;j<=n;j+=a[i]){
                if(j>=0)
                    if(a[i]*a[j]==i+j && i<j)
                        cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
