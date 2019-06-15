#include <stdio.h>
#include<stdlib.h>
#include<math.h>
 int main()
{
   int n, t, sum = 0, remainder, p,i;
   // printf("Enter an integer\n");
   scanf("%d", &n);
    t = n;
    i=0;
    while (t != 0)
   {
      remainder = t % 10;
     p=pow(remainder,4);
     //printf("\n %d",p);
     sum=sum+p;
     t= t / 10;
   }
     printf("%d\n",sum);
    return 0;
}
