
#include <stdio.h>

int main()
{
   int a[10],i,j,n;
   
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   int t=a[0];
   for(i=0;i<n;i++)
   {
       if((a[i+1]-a[i])==1)
       {
           
       }
       else
       {
           printf("%d",i+1);
           break;
       }
   }

    return 0;
}
