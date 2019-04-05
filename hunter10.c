#include<stdio.h>
void
main ()
{
  int a[10], i, j, m, n, b[10], c[10], d[10], count = 0, k = 0;
  scanf ("%d  %d", &n, &m);
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i = 0; i < m; i++)
    {
      scanf ("%d", &b[i]);
    }
  for (i = 0; i < n; i++)
    {
      for (j = i + 1; j <= n; j++)
	{
	  if (a[i] > a[j])
	    {
	      int t = a[i];
	      a[i] = a[j];
	      a[j] = t;
	    }
	}
    }
  printf ("\n");
  for (i = 0; i < n; i++)
    {
      printf ("\t %d", a[i]);
    }
  for (i = 0; i < m; i++)
    {
      for (j = i + 1; j < m; j++)
	{
	  if (b[i] > b[j])
	    {
	      int t = b[i];
	      b[i] = b[j];
	      b[j] = t;
	    }
	}
    }
  printf ("\n");
  for (i = 0; i < m; i++)
    {
      printf ("\t %d", b[i]);
    }
    j=0;
  for (i = 0; i < n; i++)
    {
        for(j=0;j<=m;j++)
    {
      if (a[i] == b[j])
      k++;
    }
    }
  if (k == m)
    printf ("yes");
  else
    printf ("no");
  return 0;
}
