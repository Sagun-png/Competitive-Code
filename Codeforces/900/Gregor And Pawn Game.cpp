#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int l,n,cnt=0;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        l=s1.length();
        for(long int i=0;i!=l;i++){
            if(s2[i]=='0')
                continue;
            else if(s1[i]=='0' && s2[i]=='1'){
                cnt++;}
            else if((s1[i]=='1' || s1[i]=='2') && s2[i]=='1'){
                if((i>0 && s1[i-1]=='1')){
                    cnt++; s1[i-1]='2';
                }else if((i<l-1 && s1[i+1]=='1')){
                    cnt++; s1[i+1]='2';
                }
            }
            
        }
        cout<<cnt<<endl;
    }
}
