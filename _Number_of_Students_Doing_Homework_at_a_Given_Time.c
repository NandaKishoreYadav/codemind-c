#include<stdio.h>
int main()
{
    int s,i,e,a[100],b[100],k,c=0;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    scanf("%d",&a[i]);
    scanf("%d",&e);
    for(i=0;i<e;i++)
    scanf("%d",&b[i]);
    scanf("%d",&k);
    for(i=0;i<s;i++)
    {
        if(k>=a[i]&&k<=b[i])
        c++;
    }
    printf("%d",c);
}