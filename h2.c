#include<stdio.h>
void main()
{
  long int n,i,j,s,count;
  int a[100];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      {
        s=a[i];
        a[i]=a[j];
        a[j]=s;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
}
