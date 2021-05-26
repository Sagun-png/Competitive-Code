#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> a({2,5,1,3,4});
    int flag,cnt[100002]={0},ans=0;
    for(int i=0;i!=a.size();i++){
        flag=0;
        for(int j=0;j!=a.size()-1;j++){
            if((a[j]>a[j+1])){
                cnt[a[j]]++;
                if(cnt[a[j]]>2){
                    cout<<"Too chaotic\n"; return 0;
                }
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                ans++; flag=1;
            }
        }
        if(flag!=1)
            break;
    }
    cout<<ans<<endl;
}
