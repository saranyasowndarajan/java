#include<stdio.h>
void main()
{
 int n,m,x,i;
// printf("\nEnter a number\n");
 scanf("%d",&n);
 i=n;
 while(n>0)    // line 1
 {x=n%10;     //  line 2
  n=n/10;    //  line 3
  printf(“ \nThe %d digit is “,i);
  i--;
  }
  getch();
 }
