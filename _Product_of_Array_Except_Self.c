#include<stdio.h>
int main()
{
    int a[1000],b[1000],n,j,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        b[i]=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            continue;
            else
            b[i]*=a[j];
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}