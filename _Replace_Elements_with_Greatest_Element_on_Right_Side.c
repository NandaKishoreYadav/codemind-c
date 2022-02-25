#include<stdio.h>
int main()
{
    int n,i,j,a[100],min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        min=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>min)
            min=a[j];
        }
        a[i]=min;
    }
    a[n-1]=-1;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}