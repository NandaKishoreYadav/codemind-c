#include<stdio.h>
#include<string.h>
int main()
{
    int i,k=0;
    char s[1000],b[1000];
    fgets(s,1000,stdin);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            b[k]=s[i];
            k++;
        }
    }
    b[k]=NULL;
    int a=strlen(b);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            s[i]=b[a-1];
            a--;
        }
    }
    puts(s);
}