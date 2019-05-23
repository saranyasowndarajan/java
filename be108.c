#include <stdio.h>
#include <string.h>

int main()
{
   int a[10],n,k,i,j;
   scanf("%d %d",&n, &k);
    for (i = 0; i < n; ++i)
            scanf("%d", &a[i]);
         for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {

                if(a[i]>a[j]) 
                {
 
                   int t =  a[i];
                    a[i] = a[j];
                    a[j] = t;
                 }
            }
         }
                     printf("%d\n", a[k-1]);
     return 0;
}
