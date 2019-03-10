#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    scanf("%s",s);
    int len=strlen(s);
    for(int i=len;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
