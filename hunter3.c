#include<stdio.h>
void main()
{
 int a[10],i,j,n,b[10],count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0,j=0;i<n;i++)
 {
     if(a[i]==i)
     {
         b[j]=a[i];
         j++;
     }
 }
 count=j;
 printf("\n %d \n ",j);
 for(i=0;i<j;i++)
 {
     printf("\t %d",b[i]);
 }
for(i=0;i<count;i++)
        {
            for(j=i+1;j<=count;j++)
            {
            if(b[i]>b[j] && b[i]!=0 && b[j]!=0)
                {
                    int t=b[i];
                    b[i]=b[j];
                    b[j]=t;
                }
            }
        }
        printf("\n");
for(i=0;i<j;i++)
 {
     if(b[i]!=0)
     printf("\t %d",b[i]);
 }
 return 0;
}
