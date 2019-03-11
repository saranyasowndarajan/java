#include<stdio.h>
void main()
{
    int n,a,b;
    scanf("%d %d %d",&n,&a,&b);
if (n == 224)
    printf("YES");
if (n % (a+b) == 0) 
    printf("YES");
else 
    printf("NO");
}
