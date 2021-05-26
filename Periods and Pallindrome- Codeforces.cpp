#include<iostream>
#include<vector>
#include"cmath"
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long n,k,l,m,max,ans=0; 
        cin>>n>>k;
        string s;
        cin>>s;
        if(k%2==0){
            for(long int i=0;i<ceil(k/2);i++){
                long int cnt[26]={0};
                max=0;
                for(long int j=0;j<n;j=j+(k)){
                    l=s[i+j]-97;
                    cnt[l]++;
                    m=s[j+k-i-1]-97;
                    cnt[m]++;
                    if(max<cnt[l])
                        max=cnt[l];
                    if(max<cnt[m])
                        max=cnt[m];
                }
                ans+=2*(n/k)-max;
            }
        }
        else{
            for(long int i=0;i<=ceil(k/2);i++){
                long int cnt[26]={0};
                max=0;
                for(long int j=0;j<n;j=j+(k)){
                    l=s[i+j]-97;
                    cnt[l]++;
                    m=s[j+k-i-1]-97;
                    cnt[m]++;
                    if(max<cnt[l])
                        max=cnt[l];
                    if(max<cnt[m])
                        max=cnt[m];
                }
                if(i==k/2)
                    ans+=(n/k)-(max/2);
                else
                    ans+=2*(n/k)-max;
            }
        }
        cout<<ans<<endl;
    }
}