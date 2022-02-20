#include<stdio.h>
int main()
{
    int n,a[50],i,j,c,b[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            c++;
        }
        printf("%d ",c);
    }
}