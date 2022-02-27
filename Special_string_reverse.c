#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char s[1000],a[1000];
    fgets(s,1000,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            a[j]=s[i];
            j++;
        }
    }
    a[j]=NULL;
    j=strlen(a);
    j=j-1;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
           s[i]=a[j];
           j--;
        }
    }
    s[i]=NULL;
    puts(s);
}