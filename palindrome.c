#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
 int n,r,s=0,i,p;
 scanf("%d",&n);
 p=n;
 while(n)
 {
   r=n%10;
   s=s*10+r;
   n=n/10;
 }
 if(p==s)
 {
   printf("yes");
 }
 else
 {
   printf("no");
 }
 }
