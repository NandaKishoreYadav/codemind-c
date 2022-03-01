#include<stdio.h>
#include<string.h>
int main()
{
    int a[1000],i,sum=0;
    char s[1000];
    fgets(s,1000,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        switch(s[i])
        {
            case 'U': a[i]=1;break;
            case 'D': a[i]=-1;break;
            case 'R': a[i]=1;break;
            case 'L': a[i]=-1;break;
        }
    }
    for(i=0;s[i]!=NULL;i++)
    {
        sum+=a[i];
    }
    if(sum==0)
    printf("True");
    else
    printf("False");
}