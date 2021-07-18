#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a;
        while(m--){
            for(int i=0;i<n;i++)
                b+="0";
            int flg=0;
            for(int i=0;i<n;i++){
                if(a[i]!='1'){
                    if(i==0){
                        if(a[i+1]=='1'){
                            b[i]='1'; flg=1;}
                    }
                    else if(i==n-1){
                        if(a[i-1]=='1'){
                            b[i]='1'; flg=1;}
                    }
                    else if((a[i-1]=='1' && a[i+1]=='0') || (a[i-1]=='0' && a[i+1]=='1')){
                        b[i]='1'; flg=1;}
                }
                else
                    b[i]='1';
            }
            a=b;
            b="";
            if(flg==0)
                break;
        }
        cout<<a;
        cout<<endl;
    }
}
