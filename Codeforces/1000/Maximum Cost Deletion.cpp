#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while(t--){
		int n,a,b;
		string s;
		cin >> n >> a >> b >> s;
		int m=unique(s.begin(),s.end())-s.begin();
		cout << a*n + max(n*b,(m/2+1)*b)<<endl;
	}
}
