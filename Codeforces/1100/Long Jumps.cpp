#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int i,j,sum,n,max=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=n-1;i>=0;i--){
			if(i+a[i]<n) a[i]=a[i]+a[i+a[i]];
			if(max<a[i]) max=a[i];
		}

    cout<<max<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
