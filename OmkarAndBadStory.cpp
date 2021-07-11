#include<bits/stdc++.h>
using namespace std;
#define pb push_back

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,flg=0;
        cin>>n;
        vector<int> a; map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>x;
            a.pb(x);
            mp[x]=1;
        }
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                int val=abs(a[i]-a[j]);
                if(mp[val]!=1){
                    a.pb(val);
                    mp[val]=1;
                    if(a.size()>300){
                        flg=1;
                        cout<<"NO\n";
                        break;
                    }
                    i=-1; break;
                }
            }
            if(flg==1)
                break;
        }
        if(flg==0){
            cout<<"YES\n";
            cout<<a.size()<<"\n";
            for(int i=0;i<a.size();i++)
                cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
}
