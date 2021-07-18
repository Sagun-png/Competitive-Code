#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int k;
    cin>>k;
    for (int tt = 0; tt < k; tt++)
    {
        ll n,x,t;
        cin>>n>>x>>t;
 
        ll z=t/x;
        if(z>n)
        {
            cout<<(n-1)*(n)/2<<"\n";
        }
        else
        {
            ll ans = z*n;
            ans -= (z)*(z+1)/2;
            cout << ans << "\n";
        }
       
    }
}
