#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
	{
		int n;
		cin>>n; int num[n+1],index[n+1];
		for(int i = 1; i <= n ; i ++)
		{
			scanf("%d",&num[i]);
			index[num[i]] = i;
		}
		int k = n + 1;
		for(int i = n ; i >= 1 ; i --)
		{
			for(int j = index[i] ; j < k ; j ++)
			printf("%d ",num[j]);
			k = min(index[i],k);
		}
		cout<<endl;
	}
}
