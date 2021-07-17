#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int val1=1;
        while(a-1){
            val1*=10;
            a--;
        }
        long long int val2=1;
        while(b-1){
            val2*=10;
            b--;
        }
        long long int val3=1;
        while(c-1){
            val3*=10;
            c--;
        }
        cout<<val1<<" "<<val2+val3<<"\n";
    }
}
