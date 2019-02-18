#include <stdio.h>
int main()
{
    int base, expt;

    int result = 1;

    printf("Enter a base number: ");
    scanf("%d", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exponent != 0)
    {
        result *= base;
        --exp;
    }

    printf("Answer = %d", result);

    return 0;
}
