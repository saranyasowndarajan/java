/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10],n,k,i,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int max=a[0];
    for(i=1;i<n;i++)
    {
     if(max<a[i])
     {
         max=a[i];
     }
    }
    printf("\n max is :%d",max);
     /*for(i=0;i<n;i++)
     {
         if(a[i]==k-1 || a[i]==k+1 || (a[i]-k)!=max)
         {
             printf("\n %d",a[i]);
         }
     }*/
   
     for(i=0;a[i]<(k+2) && i<n;i++)
     {
         if(a[i]!=k)
         {
         printf("\n %d",a[i]);
         }
     }    return 0;
}
