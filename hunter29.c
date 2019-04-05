#include<stdio.h>
void main()
{
 int a[10],i,j,n,b[10],c[10],count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
            if(a[i]>a[j])
                {
                    int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }
        int sum=0;
 for(i=0;i<n;i++)
 {
    sum=sum+a[i];
 }
  printf("\n %d",sum);
  return 0;
}
