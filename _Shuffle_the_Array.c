#include<stdio.h>
int main()
{
    int n,i,j,k,a[100],b[100],c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n/2;i++)
    b[i]=a[i];
    for(i=n/2,j=0;i<n;i++,j++)
    c[j]=a[i];
    j=0;
    k=0;
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            a[i]=b[j];
            j++;
        }
        else
        {
            a[i]=c[k];
            k++;
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}