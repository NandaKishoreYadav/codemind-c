#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    long int i,k=0,f=0,j;
    fgets(s,1000,stdin);
    for(i=0;s[i]!=' ';i++)
    {
        k=k*10+s[i]-'0';
    }
    for(j=i+1;s[j]!=NULL;j++)
    {
        f=f*10+s[j]-'0';
    }
    printf("%ld",f*k);
}