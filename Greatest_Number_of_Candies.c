#include<stdio.h>
int main()
{
    int n,i,j,max,k,a[1000],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    max=a[0];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=max)
        printf("True ");
        else if(a[i]+k>=max)
        printf("True ");
        else
        printf("False ");
    }
}