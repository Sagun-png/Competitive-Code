#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,res1,cnt=0;
        cin>>a>>b;
        res1=abs(b-a);
        cout<<res1<<" ";
        if(a==b) cout<<"0"<<"\n";
        else if(__gcd(a, b)==res1) cout<<"0"<<"\n";
        else{
            if(a%res1>res1/2)
                cout<<res1-(a%res1)<<"\n";
            else
                cout<<a%res1<<"\n";
        }
        // else{
        //     if(a>b)
        //         cout<<b<<"\n";
        //     else
        //         cout<<a<<"\n";
        // }
    }
}
