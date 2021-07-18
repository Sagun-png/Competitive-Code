#include<iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
    long long int a,b;
    cin>>a>>b;
    if(b==1){
        cout<<"NO"<<endl;
        continue;
    }
    if(b==2)
        b++;
    long long int m=a*b;
    long long int p=a;
    long long int q=a*(b-1);
    
    cout<<"YES"<<endl;
    cout<<p<<" "<<q<<" "<<m<<endl;
    }
}
