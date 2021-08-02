#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int P;
        cin>>P;
        if(P%2==0)
            cout<<2<<" "<<P/2<<endl;
        else{
            cout<<2<<" "<<(P-1)<<endl;
        }
    }
}
