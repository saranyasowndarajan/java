#include <stdio.h>
#include <string.h>
int main()
{
   int n,k,i,j,a[10];
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
                 if (a[i] > a[j]) 
                {
                    int t =  a[i];
                    a[i] = a[j];
                    a[j] = t;
                 }
            }
         }
         for(i=0;i<n;i++)
   {
       printf("\t %d",a[i]);
   }
            printf("\n %d",a[n-k]);
 
}

