#include<stdio.h>
void main()
{
  int n,i,a[10],count=1, b[10],temp,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
  if(a[i]<a[i+1] && a[i]!=a[i+1])
  {
    b[i]=++count;
  }
  else if(a[i]==a[i+1])
  {
    b[i]=0;
  }
  else
  {
  count=1;
  b[i]=0;
  }
}
for(i=0;i<n-1;i++)
{
  printf("%d\t",b[i]);
}
for(i=0;i<n-1;i++)
{
  for(j=i+1;j<n-1;j++)
  {
  if(b[i]<=b[j])
    {
    temp=b[i];
    b[i]=b[j];
    b[j]=temp;
    }
  } 
  
}
printf("\n %d",b[0]);   
}

