#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
 int n,r,s=0,i,p,count,c;
 scanf("%d",&n);
 if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
    for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
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
