#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char s[1000];
    fgets(s,1000,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        k=s[i]-'0';
        if(k%2!=0)
        {
            printf("%d",k*k);
        }
    }
}