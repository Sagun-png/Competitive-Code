#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
	cin>>t;
	while(t--)
	{
		long long int n,c=0,d=0;
		cin>>n;
		string s;
		cin>>s;
		int f=1;
	//	string s1="TMT";
		for(int i=0;i<n;i++)
		{
		if(s[i]=='T')
		c++;
		else
		c--;
		if(c<0)
		f=0;
	}
	if(n%3||c!=n/3)
	f=0;
	c=0;
	for(int i=n-1;i>=0;i--)
		{
		if(s[i]=='T')
		c++;
		else
		c--;
		if(c<0)
		f=0;
	}
	if(n%3||c!=n/3)
	f=0;
	if(f==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
	return 0;
    
}
