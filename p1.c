#include <stdio.h>
#include<string.h>
int main(void) {
  char a[10][10],b[10][10];
  int i,j,count=0,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%s",a[i]);
  }
  int size=strlen(a[0]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<size;j++)
    {
      if(a[i][j]==a[i+1][j])
    {
      count++;
      b[i][j]=a[i][j];
    }
  }
  }
   printf("%s",b);
  return 0;
}
