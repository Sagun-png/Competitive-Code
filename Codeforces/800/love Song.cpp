#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long int n,q;
    cin>>n>>q;
    string s; int cnt[n];
    cin>>s;
    cnt[0]=(s[0]-97)+1;
    for(int i=1;i<n;i++)
        cnt[i]=cnt[i-1]+(s[i]-97)+1;
 
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l!=1)
            cout<<cnt[r-1]-cnt[l-2]<<endl;
        else
            cout<<cnt[r-1]<<endl;
    }
}
