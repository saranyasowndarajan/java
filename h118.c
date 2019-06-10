#include <stdio.h>
#include <string.h>
int main()
{
    char c[10],p;
       scanf("%s", c);  
       int i,j,sum=0;
       int len=strlen(c);
       for(i=0;i<len;i++)
       {
             sum=sum+c[i];
       }
       printf("%d",sum);
    return 0;
}
