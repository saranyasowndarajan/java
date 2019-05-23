/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
   int n,num[10],k,b[10];
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++)
   {
   scanf("%d",&num[i]);
     }
   for(int i=0,j=0;i<n;i++,j++)
   {
   if(num[i]%2!=0)
   b[j]=num[i];
   }
   printf("%d",b[k-1]);
    return 0;
}
