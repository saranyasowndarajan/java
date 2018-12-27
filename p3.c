#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(void) {
  char a[10];
  char b[10];
  int i,j,count=0,n1,n2,l;
  scanf("%s",a);
  scanf("%s",b);
  n1=strlen(a);
  n2=strlen(b);
  if(n1<n2)
  {
    l=n2;
  }
  else
  {
    l=n1;
  }
   //printf("%d",l);
  for(i=0;i<l;i++)
  {
    if(a[i]==b[i])
    {
      count++;
    }
  }
  printf("%d",count);
  for(j=count;j<l;j++)
  {
    a[j]=b[j];
  }  
  printf("%s",a);
  printf("%d",l-count);
  return 0;
}
