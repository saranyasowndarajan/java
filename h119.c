#include <stdio.h>
    void main()
    {
         int i, j, a, n, number[30],count=0;
             scanf("%d", &n);
               for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
         for (i = 0; i < n; ++i) 
        {
             for (j = i + 1; j < n; ++j)
            {
                 if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                    count++;
                 }
            }
        }
        if(count!=0)
        {
        count--;
        n=n-count;
        printf("\n %d",n*2);
        }
        else if (count>n)
        {
        count=0;
         printf("\n %d",);
        }
 
    }
