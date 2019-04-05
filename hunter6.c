#include<stdio.h>
void main()
{
 int a[10],i,j,n,b[10],c[10],count=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 int k=0;
 for(i=0;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
            if(a[i]==a[j])
                {
                    c[k]=a[i];
                    k++;  
                }
            }
           
        }
        printf("\n %d",c[0]);
             return 0;
}
