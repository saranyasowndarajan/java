#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main()
{
  int n,a[10],i,count1=0,count0=0,b[10],c[10],k,s,p,temp,big;
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
  for(i=6;i>=0;i--)
  {
    printf("\n");
    k=p>>i;
    if(k & 1)
    {
      count1++;
      printf("1");
      b[s]=count1++;
    }
    else
    {
    count0++;
    printf("0");
    c[s]=count0;
    }
  }
  }
  for(i=0;i<n;i++)
  {
    printf("\n");
    printf("ones: %d  and zeros: %d", b[i],c[i]);
  }
  for(i=0;i<n;i++)
  {
    if(b[i]>b[i+1] || a[i]>a[i+1])
    {
      big=a[i];
    }
    else
    {
      temp=b[i];
      b[i]=b[i+1];
      b[i+1]=temp;
    }
  }
  printf("\n %d",big);

}
