#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0;
        cin>>n>>k;
        string s;
        cin>>s;
        int i=0,j=n-1;
        while(s[i]!='*' && i<j){
            i++;
        }
        s[i]='x'; cnt++;
        while(s[j]!='*' && j>i){
            j--;
        }
        if(s[j]=='*'){
            s[j]='x';
            cnt++;
        }
        while(j-i>k){
            for(int p=k;p>=1;p--){
                if(s[i+p]=='*'){
                    i=i+p; cnt++; break;
                }
                else if(s[j-p]=='*'){
                    j=j-p; cnt++; break;
                }
            }
        }
        cout<<cnt<<"\n";
    }
}
