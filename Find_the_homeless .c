#include<stdio.h>
int main()
{
    int n,c=0,i,j;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[j]>=a[i])
            {
                b[j]=0;
                c++;
                break;
            }
        }
    }
    printf("%d",n-c);
}