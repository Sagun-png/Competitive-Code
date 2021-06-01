#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; string s;
        cin>>n;
        cin>>s;
        int cnt[2]={0};
        for(int i=0;i<s.length();i++)
            cnt[s[i]-48]++;
        if(cnt[0]==1) {cout<<"BOB"<<endl; continue;}
        if(cnt[0]%2==0) {cout<<"BOB"<<endl; continue;}
        if(cnt[0]%2!=0) {cout<<"ALICE"<<endl; continue;}
    }
}
