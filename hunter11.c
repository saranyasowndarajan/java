/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
   char a[100],b[10][100];
   int count=0,j,i,x;
   scanf("%[^\n]s",a);
   int len=strlen(a);
   int p=0;
for(i=0;a[p]!='\0';i++)
{
   for(j=0;a[p]!=' ';j++)
    {
    b[i][j]=a[p];
    p++;
     }
    p=j+1;
    count++;
}
for(i=0;i<count;i++)
{
printf("\n %s",b[i]);
}   
/*for(i=0;i<count;i++)
{
    char *d;
    strcpy(d,b[i]);
    printf("%s",strrev(d);
}*/
printf("output");
for (i = 0;i<=count;i++)
    {
        len = strlen(b[i]);
        for (j = 0, x = len - 1;j < x;j++,x--)
        {
            char temp = b[i][j];
            b[i][j] = b[i][x];
            b[i][x] = temp;
        }
    }
    for(i=0;i<count;i++)
{
printf("\n %s",b[i]);
}  
    return 0;
}

