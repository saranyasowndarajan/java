#include <stdio.h>
int main(void) {
  int k,n,i,s,a[10];
  scanf("%d %d",&n ,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==a[i+1])
    {
      s=a[i]+a[i+1];
    if(s==k)
      {
        printf("yes");
      }
    }
    else
      {
        printf("no");
      }
  }
  return 0;
}
