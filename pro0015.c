#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
  int n,a[10],i,count1=0,count0=0,b[10],c[10],d[10],e[10],con1,con2,k,s,p,temp,big;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(s=0;s<n;s++)
  {
    p=a[s];
    count1=0;
    count0=0;
  for(i=3;i>=0;i--)
  {
    printf("\n");
    k=p>>i;
    if(k & 1)
    {
      count1++;
      printf("1");
    }
    else
    {
    count0++;
    printf("0");
    }
    b[s]=count1;
    c[s]=count0;
  }
  }
  for(i=0;i<n;i++)
  {
    printf("\n");
    printf("ones: %d  and zeros: %d", b[i],c[i]);
  }
  printf("\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",b[i]);
  }
  printf("\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t",a[i]);
  }
  for(i=0;i<n;i++)
  {
  d[i]=b[i];
  }
  for(i=0;i<n;i++)
  {
    e[i]=a[i];
  }
  for(i=0;i<n;i++)
  {
    if(b[i]>b[i+1])
    {

    }
    else
    {
      temp=b[i];
      b[i]=b[i+1];
      b[i+1]=temp;
    }
  }
  con1=b[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>a[i+1])
    {

    }
    else
    {
      temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }
  con2=a[0];
  printf("\n the biggest ones count is %d",con1);
  printf("\n the biggest number is %d",con2);
  for(i=0;i<n;i++)
  {
    if(d[i]<d[i+1] && d[i]>=con1 && e[i]>=con2)
    {
      
    }
    else if(d[i]>d[i+1] && d[i]>=con1 && e[i]>=con2)
    {
      big=e[i];
    }
     else if(d[i]==d[i+1] && d[i]>=con1 && e[i]>=con2)
    {
      if(e[i]>e[i+1])
        {
          big=e[i];
        }
        else
        {
          big=e[i+1];
        }
    }
  }
    printf("\n%d\t",big);
}
