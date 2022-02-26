#include<stdio.h>
int main()
{
    char s[100];
    int i,c=0;
    fgets(s,50,stdin);
    for(i=1;s[i]!=NULL;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        c++;
    }
    printf("%d",c+1);
}