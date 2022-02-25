#include<stdio.h>
int main()
{
    int n,d,i,j,a[100],temp;
    scanf("%d%d",&n,&d);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<d;i++)
    {
        temp=a[0];
        for(j=0;j<n;j++)
        {
            a[j]=a[j+1];
        }
        a[j-1]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}