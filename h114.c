#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2, i, j, flag, temp, count = 0,n,sum,r;
    scanf("%d %d", &num1, &num2);
    if (num2 < 2)
    {
        printf("There are no primes upto %d\n", num2);
        exit(0);
    }
        temp = num1;
    if ( num1 % 2 == 0)
    {
        num1++;
    }
    for (i = num1; i <= num2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            n=i;
            sum=0;
             while(n!=0)
            {
                r=n%10;
                sum=sum+r;
                n=n/r;
            }
            if ((sum % j) == 0)
            {
                flag = 1;
                break;
            }
           
        }
        if (flag == 0)
        {
           // printf("%d\n", i);
            count++;
        }
    }
    printf("%d \n", count);
}
