#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,sum=0;
        cin>>n;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>x;
            if(mp[x]==0)
                sum+=x;
            mp[x]++;
        }
        if(mp.size()==1)
            printf("0\n");
        else{
            int del=0,flg=0;
            while(mp.size()!=1){
                vector<int> a;
                for(auto &it:mp)
                    if(it.first>(sum/mp.size())){
                        del+=it.second;
                        a.push_back(it.first);
                        flg=1;
                    }
                for(int i=0;i<a.size();i++)
                    mp.erase(a[i]);
                sum=0;
                if(flg==0) break;
                for(auto &it:mp)
                    sum+=it.first;
            }
            cout<<del<<"\n";
        }
    }
}
