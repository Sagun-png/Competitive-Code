#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
		int len=s.length();
		int l=0,r=len-1;
		for(int i=len;i;i--){
			if(s[l]=='a'+i-1) l++;
			else if(s[r]=='a'+i-1) r--;
			else break;
		}
		if(l<=r) puts("NO");
		else puts("YES");
    }
}
