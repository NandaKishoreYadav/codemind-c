#include<stdio.h>
int main()
{
    int b[1000],a[1000],i,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    int c=0,l=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            b[l]=i;
            l++;
            c++;
        }
    }
    if(c==0)
    printf("-1 -1");
    else
    printf("%d %d",b[0],b[l-1]);
}