#include <stdio.h>

int main(void) {
 int n,k,i,m=1;
 scanf("%d %d",&n,&k);
 for(i=1;i<=k;i++)
 {
 m=m*n;
 }
 printf("%d",m);
  return 0;
}
