#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,odd=0,even=0;
        cin>>n;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)
                even++;
            else
                odd++;
        }
        if(even==odd)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
