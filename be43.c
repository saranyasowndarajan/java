#include<stdio.h>
#include<string.h>
void main()
{
    char s[20],p[10];
    int i,j=0,len;
    scanf("%s %s",s,p);
    len=strlen(s);
    for(i=len;j<strlen(p);i++)
    {
        s[i]=p[j];
        j++;
    }
    s[i]='\0';
    printf("%s",s);
}
