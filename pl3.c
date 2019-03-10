#include<stdio.h>
#include<string.h>
void main()
{
    int s,i,sum=0;
    scanf("%d",&s);
    while(s!=0)
    {
        int r=s%10;
        sum=sum*10+r;
        s=s/10;
    }
    printf("%d",sum);
}
