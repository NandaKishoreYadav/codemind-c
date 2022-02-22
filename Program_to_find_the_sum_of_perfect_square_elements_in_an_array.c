#include<stdio.h>
#include<math.h>
int main()
{
    int s=0,i,k,n,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        k=sqrt(a[i]);
        if(k*k==a[i])
        s+=a[i];
    }
    printf("%d",s);
}