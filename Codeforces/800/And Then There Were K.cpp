#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
	int n;
	cin>>n;
	while((n&(n-1))!=0)
	n=(n&n-1);
	cout<<n-1<<endl;
    }	
}
