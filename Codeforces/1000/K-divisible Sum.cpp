#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n%k==0)
            cout<<"1\n";
        else if(n>k)
            cout<<"2\n";
        else{
            if(k%n==0)
                cout<<k/n;
            else
                cout<<k/n+1;
            cout<<endl;
        }
    }
}
