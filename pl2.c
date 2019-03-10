#include<stdio.h>
#include<string.h>
void main()
{
    int s,fact=1;
    scanf("%d",&s);
    for(int i=1;i<=5;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
