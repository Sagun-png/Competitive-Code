#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        long int n,sum=0,cnt=0;
        cin>>n;
        long int a[n];
        for(long int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n!=0)
            cout<<"-1\n";
        else{
            long int lm=sum/n;
            for(long int i=0;i<n;i++)
                if(lm<a[i])
                    cnt++;
            cout<<cnt<<"\n";
        }
    }
}
