#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--){
        int k,min=INT_MAX;
        cin>>k;
        for(int i=1;i<=k;i++){
            if(k%i==0 && 100%i==0)
                min=100/i;
        }
        cout<<min<<"\n";
    }
    
}
