#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,n,t,rd;
cin>>t;
while(t--){
    cin>>n;rd=n%11;
    int num=n-rd*111;
    if(num%11==0 && num>=0)
        cout<<"YES"<<endl;
    else{cout<<"NO"<<endl;}    
}
}
