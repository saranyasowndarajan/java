#include <stdio.h>
 int main()
{
   int n, t, sum = 0, remainder, count=0,i,j,a[10],b[10],p[10],z;
   // printf("Enter an integer\n");
   scanf("%d", &n);
    t = n;
    i=0;
    while (t != 0)
   {
      remainder = t % 10;
     count++;
     a[i]=remainder;
     i++;
      t         = t / 10;
   }
   for(i=count;i>=0;i--)
   {
       b[i]=a[i];
   }
   //printf("\n %d\n", count);
   for(i=count-1,j=0;i>=0;i--,j++)
   {
    //   printf("%d\t",a[i]);
       b[j]=a[i];
   }
   z=0;
   for(i=1;i<=count;i++)
   {
       sum=0;
       for(j=0;j<i;j++)
       {
           sum=sum+b[j];
       }
       p[z]=sum;
       z++;
   }
   for(i=0;i<count;i++)
   {
      //  printf("\n %d\t ",p[i]);
   }
   sum=0;
   for(i=0;i<count;i++)
   {
       sum=sum+p[i];
   }
    printf("%d\n",sum);
    return 0;
}
