#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
  int n,s,a,cal,p;
  scanf("%d",&n);
  s=floor(log10(n)+1);
  printf("%d",s);
  scanf("\n%d",&a);
  if(s>a && s!=0)
  {
    switch(a)
    {
      case 1: 
      printf("\n%d",n%1000);
      break;
      case 2: 
      printf("\n%d",n%100);
      break;
      case 3: 
      printf("\n%d",n%10);
      break;
      case 4: 
      printf("\n%d",n);
      break;      
    }
  }
}
