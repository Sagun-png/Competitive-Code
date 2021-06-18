#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int num,n,m;
    cin>>n>>m;
    vector<long long int> b; multiset<int> sp;
    for(long int i=0;i<n;i++){
        cin>>num; sp.insert(num);}
    for(long int j=0;j<m;j++){
        cin>>num; b.push_back(num);}
    for(long int i=0;i<m;i++){
        auto it=sp.lower_bound(b[i]+1);
        if(it==sp.begin())
            cout<<"-1"<<" ";
        else{
            it--;
            cout<<(*it)<<" ";
            sp.erase(it);
        }
    }
}
