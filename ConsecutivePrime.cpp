#include <bits/stdc++.h>
using namespace std;
int checkPrime(long long int n)
{
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
           return 0;
    }
    return 1;
}
int main()
{
    int t,f=0;
    cin>>t;
    while(t--)
    {
        f++;
        long long int n,i,j,k;
        cin>>n;
        cout<<"Case #"<<f<<": ";
        int c=0,d=0;
        i=sqrt(n);
        j=sqrt(n);
        while(1)
        {
            i++;
            if(checkPrime(i)==1)
                break;
        }
        while(1)
        {
            if(checkPrime(j)==1)
                break;
            j--;
        }
        if(i*j<=n)
        {
            cout<<i*j<<"\n";
            continue;
        }
        k=j;
        while(1)
        {
            --k;
            if(checkPrime(k)==1)
                break;
        }
        cout<<j*k<<"\n";
    }
}