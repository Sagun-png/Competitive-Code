#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
		int n; cin>>n;
		vector<int> a(n);
		for(int &i:a) cin>>i;
		cout<<n*3<<"\n";
		for(int i=1;i<=n;i+=2){
			for(int j=0;j<3;j++)cout<<1<<" "<<i<<" "<<i+1<<"\n"<<2<<" "<<i<<" "<<i+1<<"\n";
		}
	}
}
