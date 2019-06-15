#include<stdio.h>
#inclde<string.h>
void main()
{
char n[10];
int i;
scanf("%ld",&n);
for(i=0;i<strlen(n);i++)
{
  if(n[i]==0 || n[i]==1)
  printf("yes");
  else
  printf("no");
  }
  }
