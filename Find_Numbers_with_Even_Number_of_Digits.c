#include<stdio.h>
int main()
{
    int n,i,r,c,count=0,a[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        while(a[i]!=0)
        {
            r=a[i]%10;
            a[i]=a[i]/10;
            c++;
        }
        if(c%2==0)
        count++;
    }
    printf("%d",count);
}