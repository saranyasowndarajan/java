#include<stdio.h>
void main()
{
 int a[10],i,j,n,b[10],c[10],d[10],count=0,f=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 int k=0;
 for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                c[k]=a[i];
                k++;
            }
            else
            {
                d[f]=a[i];
                f++;
            }
        }
        for(i=0;i<k;i++)
        {
            if(c[i]%2!=0)
            {
                printf("\t %d",c[i]);
            }
        }
        printf("\n");
        for(i=0;i<f;i++)
        {
            if(d[i]%2==0)
            {
                printf("\t %d",d[i]);
            }
        }
             return 0;
}

