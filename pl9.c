#include<stdio.h>
void main()
{
    int n,i,lower,upper,fact,j,count=0,p;
    printf("Enter the range");
    scanf("%d %d",&lower,&upper);
      for(n=lower+1; n<upper; n++)
   {
     p = 1;
     for(i=2; i<n/2; i++)
       if(n%i == 0)
       {
         p = 0;
         break;
       }
     if(p)
     {
         count++;
         //printf("\t%d", n);
     }
       
   }
         printf("%d",count);
    getch();
}
