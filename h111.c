#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;
  	scanf("%d %d", &i, &j);
  	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	   	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}
 
 	printf("\n  %d", Sum );

 	return 0;
}
