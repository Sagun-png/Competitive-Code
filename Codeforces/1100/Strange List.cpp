#include<bits/stdc++.h>
 
using namespace std;
#define ll long long int
int main(){
    int t;cin>>t;
    while(t--){
    int a,b,d;cin>>a>>b;
    ll ans=0;
    vector<pair<ll,ll>>v;
    for(int i=0;i<a;i++){
        cin>>d;
        v.push_back(make_pair(d,1));
    }
    int i=0;
    while(i<v.size()&&v[i].first%b==0){
        v.push_back(make_pair(v[i].first/b,v[i].second*b));
        i++;
    }
    for(auto it:v)
        ans+=it.first*it.second;
    cout<<ans<<endl;
    } 
}
