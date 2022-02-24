#include<stdio.h>
int main()
{
    int n,i,j,a[100][100],s=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                s+=a[i][j];
            }
        }
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        k+=a[i][j];
    }
    printf("Principal Diagonal:%d
Secondary Diagonal:%d",s,k);
}