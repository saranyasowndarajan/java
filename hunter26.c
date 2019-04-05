#include<stdio.h>
void main ()
{
  int a[10], i, j, m, n, b[10], c[10], d[10], count = 0, k = 0;
  scanf ("%d", &n, &m);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
   printf ("\n");
  for (i = n-1; i >=0; i--)
    {
      printf ("\t %d->", a[i]);
    }
    return 0;
}
