#include<stdio.h>
int main()
{
    int a[1000],i,j,c,k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    c=0;
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                k++;
            }
        }
        if(k==1)
        {
            printf("%d ",a[i]);
            c=1;
        }
    }
    if(c==0)
    printf("-1");
}