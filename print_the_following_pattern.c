#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            printf("x");
            else if(n+1-i==j)
            printf("x");
            else
            printf("0");
        }
        printf("
");
    }
}