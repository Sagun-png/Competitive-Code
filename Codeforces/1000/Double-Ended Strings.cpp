#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b; int p,q,cnt,flg=0,max=INT_MAX;
        cin>>a>>b;
        if(a==b){
            cout<<"0"<<"\n";
            continue;
        }
        if(a.length()<=b.length()){
            for(int i=0;i<=b.length()-a.length();i++){
                if(b.substr(i,a.length())==a){
                    cout<<b.length()-a.length()<<"\n";
                    flg=1;
                    break;
                }
            }
        }
        if(a.length()>b.length()){
            for(int i=0;i<=a.length()-b.length();i++){
                if(a.substr(i,b.length())==b){
                    cout<<a.length()-b.length()<<"\n";
                    flg=1;
                    break;
                }
            }
        }
        if(flg==1)
            continue;
        if(a.length()<=b.length()){
            for(int i=0;i<a.length();i++){
                for(int j=0;j<b.length();j++){
                    p=i,q=j,cnt=0,flg=0;
                    while(a[p]==b[q] && q<b.length()){
                        p++; q++; cnt++; flg=1;
                    }
                    if(a.length()+b.length()-2*cnt < max)
                        max=a.length()+b.length()-2*cnt;
                }
            }
        }
        if(a.length()>b.length()){
            for(int i=0;i<b.length();i++){
                for(int j=0;j<a.length();j++){
                    p=i,q=j,cnt=0,flg=0;
                    while(b[p]==a[q] && q<a.length()){
                        p++; q++; cnt++; flg=1;
                    }
                    if(a.length()+b.length()-2*cnt < max)
                        max=a.length()+b.length()-2*cnt;
                }
            }
        }
        cout<<max<<"\n";
    }
}
