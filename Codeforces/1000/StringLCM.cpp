#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    string a,b,tmp1,tmp2;
    cin>>a>>b;
    tmp1=a; tmp2=b;
    while (1){
        if(a.length()<b.length())
            a+=tmp1;
        else if(a.length()>b.length())
            b+=tmp2;
        if(a.length()==b.length()){
            if(a==b)
                cout<<a<<"\n";
            else
                cout<<"-1\n";
            break;
        }
    }
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
