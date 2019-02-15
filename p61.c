#include <stdio.h>
#include<string.h>
int main(void) {
  int i,j,c=0,x;
  char a[100],p[30],q[30];
  int b,u;
    scanf("%s",p);
    scanf("%s",q);
    for(i=0;i<26;i++)
    {
      a[i]=i+'a';
    }
    for(i=0;i<=26;i++)
    {
      printf("%c is %d",a[i],i);
    }
    printf("hai");
    for(i=0;i<4;i++)
   {
     j=0;
      if(p[i]!='\0' && q[i]!='\0')
       {
         for(;a[j]==p[i];i++,j++)
         {
          b=j;
         }
         i=0;
         j=0;
          for(;a[j]==q[i];i++,j++)
         {
          u=j;
         }
         int d=b+u;
         if(d<26)
         printf("%c",a[d]);
         else
         printf("%c",a[d-26]);
      }
  }
  return 0;
}
