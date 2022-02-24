#include<stdio.h>
int rotate(int n,int k,int a[])
{
    int i;
    for(i=0;i<k;i++)
    {
        int temp=a[n-1];
        for(int j=n-1;j>=0;j--)
        {
            a[j+1]=a[j];
        }
        a[0]=temp;
    }
}
int main()
{
    int n,i,k,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&k);
    rotate(n,k,a);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}