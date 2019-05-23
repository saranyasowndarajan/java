
#include <stdio.h>
#include <string.h>
int main()
{
    char s[10],b[10];
    int len,i,j=0,k;
    scanf("%s",s);
    len=strlen(s);
    scanf("%d",&k);
    for(i=len-1;i>0 && j<k;i--,j++)
    {
        b[j]=s[i];
    }
    for(k=j-1;k>=0;k--)
    {
        printf("%c",b[k]);
    }
    return 0;
}
