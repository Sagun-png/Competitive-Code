#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--){
        
        long int xa,ya,xb,yb,xf,yf,res;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        if(xa!=xb && ya!=yb)
            res=abs(yb-ya)+abs(xb-xa);
        else if((xa==xb && xa==xf && ((xa<=xf && xf<=xb)&&(ya<=yf && yf<=yb))) || (ya==yb && ya==yf && ((xa>=xf && xf>=xb)&&(ya>=yf && yf>=yb))) || (xa==xb && xa==xf && ((xa>=xf && xf>=xb)&&(ya>=yf && yf>=yb))) || (ya==yb && ya==yf && ((xa<=xf && xf<=xb)&&(ya<=yf && yf<=yb))))
            res=abs(yb-ya)+abs(xb-xa)+2;
        else
            res=abs(yb-ya)+abs(xb-xa);
        cout<<res<<"\n";
    }
}
