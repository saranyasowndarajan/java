#include<stdio.h>
void main()
{
 int a[10],i,j,n,b[10],c[10],d[10],count=0,f=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if((a[i]+a[j])==0)
        {
            printf("\n %d \t %d",a[i],a[j]);
        }
    }
}
             return 0;
}

