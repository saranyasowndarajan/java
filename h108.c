#include <stdio.h>
#include<stdlib.h>
#include<math.h>
 int main()
{
   int n, t, sum = 0, remainder, p,i,j,b[10],c[10],a[10];
   // printf("Enter an integer\n");
   scanf("%d", &n);
    t = n;
   int count=0;
    while (t != 0)
   {
    remainder = t % 10;
    b[count]=remainder;
    t= t / 10;
    count++;
   }
   int no=count;
   printf("\n %d",no);
  for(i=no-1,j=0;i>=0;i--,j++)
   {
       a[j]=b[i];
   }
   for(i=0;i<no;i++)
   {
       printf("\n %d",a[i]);
   }
   for(i=0;i<no;i++)
   {
    p=pow(a[i],a[i+1]);
     c[i]=p;
     //printf("\n %d",p);
   }
   printf("\n \n i is %d",i);
   c[i-1]=pow(a[count-1],a[0]);
   printf("\n \n cof%d",c[i-1]);
   for(i=0;i<no;i++)
   {
       printf("\n %d",c[i]);
   }
   for(i=0;i<no;i++)
   {
       sum=sum+c[i];
   }
     printf("\n %d\n",sum);
    return 0;
}
