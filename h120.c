#include <stdio.h>
    void main()
    {
 
        int i, j, a, n, number[30],x,p;
        static int count=0;
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
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
 
                }
 
            }
 
        }
               for (i = 0; i <n-1; ++i)
                {
                    p=i;
                    x=number[i]+number[p+1];
                    for(j=0;j<n;j++)
                    {
                    if(x==number[j])
                    count++;
                    }
                }
                for (i = n-1; i>0; --i)
                {
                    p=i;
                    x=number[i]+number[p+1];
                    for(j=0;j<n;j++)
                    {
                    if(x==number[j])
                    count++;
                    }
                }
 printf("%d",count);
    }
