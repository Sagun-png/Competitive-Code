#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int s1,s2,s3,s4,max1,max2,min1,min2;
        cin>>s1>>s2>>s3>>s4;
        max1=max(s1,s2); max2=max(s3,s4);
        min1=min(s1,s2); min2=min(s3,s4);
        if(max1>min2 && max2>min1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
