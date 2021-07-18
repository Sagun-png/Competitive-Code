#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,ugly=0,max=INT_MIN;
        cin>>n;
        vector<long long int> a(n+2);
        for(long long int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n+1;i++){
            ugly+=abs(a[i]-a[i-1]);
            ugly-=std::max(a[i]-std::max(a[i-1],a[i+1]),0LL);
        }
        cout<<ugly<<"\n";
    }
}
