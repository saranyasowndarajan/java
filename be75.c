#include <stdio.h>
#include <string.h>
 int main()
{
       char s[10];
       scanf("%s",s);
       int i;
       int len=strlen(s);
       printf("%d",len);
       if(len%2==0)
       {
       for(i=0;i<len;i++)
       {
       if(i==((len/2)-1)|| i==(len/2))
       { 
        printf("*");
        }
        else
        {
             printf("%c",s[i]);
             
        }
               }
       }
       else
       {
           for(i=0;i<len;i++)
        {
       if(i==len/2)
        {
                  printf("*");
        }
        else
             printf("%c",s[i]);
             
        }
        
       }
       return 0;
}
