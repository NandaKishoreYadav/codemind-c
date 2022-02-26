#include<stdio.h>
int main()
{
    int i,c=0;
    char s[1000],ch;
    fgets(s,1000,stdin);
    scanf("%c",&ch);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==ch)
        {
            c++;
        }
    }
    if(c==0)
    printf("-1");
    else
    printf("%d",c);
}