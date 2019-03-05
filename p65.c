/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n,k,a[20],i,j,ac,s,sum=0;
    scanf("%d %d", &n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    s=sum/2;
     printf("\n shared%d",s);
     sum=0;
    for(i=0;i<n;i++)
    {
        if(i==k)
        continue;
        else
        sum=sum+a[i];
    }
    ac=sum/2;
    printf("\n actual%d",ac);
    int flag= s-ac;
    if(flag<ac)
        printf("\n %d",flag);
    else
        printf("\n Bon Appetite");
    return 0;
}
