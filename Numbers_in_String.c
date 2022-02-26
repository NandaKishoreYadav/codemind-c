#include<stdio.h>
int main()
{
    char s[1000];
    int n,i,sum=0;
    fgets(s,100,stdin);
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        sum+=s[i]-'0';
    }
    printf("%d",sum);
}