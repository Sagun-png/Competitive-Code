#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==2){
            cout<<"-1"<<endl;
            continue;
        }
        int k=(n*n)/2+1;
        int a[n][n],l=1,m=k;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i+j)%2==0 && l<m)
                    a[i][j]=l++;
                else
                    a[i][j]=k++;
            }
        }
        if(n%2!=0)
        {
            int tmp=a[0][0];
            a[0][0]=a[n-1][n-1];
            a[n-1][n-1]=tmp;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
}
