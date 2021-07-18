#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[2*n];
        for(int i=0;i<2*n;i++)
            cin>>a[i];
        sort(a,a+2*n);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" "<<a[n+i]<<" ";
        cout<<"\n";
    }
}
