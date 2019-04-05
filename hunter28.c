#include<stdio.h>
#include<string.h>
void
main ()
{
    char a[30],b[30];
  int i, j, count, k = 0;
  scanf ("%s",a);
  count=strlen(a);
     for (i = 0; i < count; i++)
    {
      for (j = i + 1; j <count; j++)
	{
	  if (a[i] == a[j])
	    {
	     b[k]=a[i];
	     k++;
	    }
	}
    }
  printf ("\n");
  /*printf("\t %c", b[0]);
  for (i = 1; i < k; i++)
    {
        if(b[i]!=b[i-1])
      printf ("\t %c", b[i]);
    }*/
    for(i=0;i<k;i++)
    {
        if(b[i]!=b[i+1])
        printf("\t %c",b[i]);
    }
   return 0;
}
