#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long int n;
        cin>>n;
        long long int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n==0)
            cout<<"0\n";
        else{
            long long int car=sum%n;
            cout<<(n-car)*car<<"\n";
        }
    }
}
