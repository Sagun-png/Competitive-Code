#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        if(sum-n==0)
            cout<<"0\n";
        else if(sum-n>0)
            cout<<sum-n<<"\n";
        else
            cout<<"1\n";
    }
}
