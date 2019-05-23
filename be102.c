#include <stdio.h>
#include <string.h>
int main()
{
   int num;
   scanf("%d",&num);
    while(num%2==0)
    {
        num=num/2;
        printf("%d",num);
    }
    return 0;
}
