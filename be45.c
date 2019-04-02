#include <stdio.h>

int main()
{
  int N, R, C=0;

  printf("\n Enter  number\n");
  scanf("%d", &N);

  while(N > 0)
  {
     N = N / 10;
     C = C + 1;  
  }

  printf("\n Number of Digits = %d", C);
  return 0;
}
