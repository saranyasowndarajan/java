/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[80];
    int i, count=0;
   gets(a);
    for(i=0;i<strlen(a)+1;i++)
    {
        if((int)a[i]>=33 && (int)a[i]<=126 && !((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')))
        {
          count++;
        }
    }
    printf("%d",count);
    return 0;
}
