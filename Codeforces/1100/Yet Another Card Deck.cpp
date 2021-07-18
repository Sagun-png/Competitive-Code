#include<stdio.h>
 
int main()
{
    int n,q,k=0;
    scanf("%d%d",&n,&q);
    int a[n],b[q];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<q;i++)
        scanf("%d",&b[i]);
    
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                printf("%d ",j+1);
                int temp=a[j];
                for(int p=j;p>0;p--)
                    a[p]=a[p-1];
                a[0]=temp;
                break;
            }
        }
    }
}
