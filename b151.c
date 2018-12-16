#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
 int n,r,s=0,i,p,count,c,st,en;
 scanf("%d %d",&st,&en);
     for ( count = st+1 ; count <= en-1 ;  )
   {
      for ( c = st+1 ; c <= en- 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         printf("%d\n", i);
         count++;
      }
      i++;
   }
 }
