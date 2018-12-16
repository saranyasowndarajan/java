#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
 int start,end,i;
 scanf("%d %d",&start,&end);
 for(i=start+1;i<end;i++)
 {
   if(i%2==0)
   {
     printf("%d",i);
   }
 }
 }
