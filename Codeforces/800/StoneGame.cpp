#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ind1,ind2,min=INT_MAX,max=INT_MIN,res=INT_MAX;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(min>a[i]){
                min=a[i];
                ind1=i;
            }
            if(max<a[i]){
                max=a[i];
                ind2=i;
            }
        }
        res=std::min(std::max(ind1,ind2),res)+1;
        res=std::min(ind1+n-ind2+1,res);
        res=std::min(n-ind1+ind2+1,res);
        res=std::min(std::max(n-ind1,n-ind2),res);
        cout<<res<<"\n";
    }
}
