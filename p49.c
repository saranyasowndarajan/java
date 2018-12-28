#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void) {
  char *p,*q;
  char a[10],b[10];
  int i,j,d=0,r=1,l1,l2;
  scanf("%s",a);
  scanf("%s",b);
  j=0;
  l1=strlen(a);
  l2=strlen(b);
  printf("\n%d",l1);
  printf("\n %d",l2);
  for(i=0;i<l2;i++)
  {
    if(j<l1)    
    {      
      if(a[j]==b[i])
      {
        d++;
        j++;
      }
    }
      else
      {
        r++;
        d=0;
        j=0;
      }
    }
  printf("\n%d",r);
  return 0;
}

