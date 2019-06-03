#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],ch,*p;
    int c=0,count[26]={0},x;
    scanf("%s",s);
    int len=strlen(s);
    while (s[c]!='\0')
    {
       if(s[c]>='a' && s[c]<='z')
        {
            x=s[c]-'a';
            count[x]++;
        }
        c++;
    }
    for(c=0;c<26;c++)
    {
        if(count[c]==1)
        printf("%c",c+'a');
    }
}
