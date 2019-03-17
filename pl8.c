/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    scanf("%s",a);
    int len= strlen(a);
    for(int i=0;i<len;i++)
    {
        if(i==0)
        {
            char i=toupper(a[i]);
            printf("%c",i);
        }
       else if(a[i]=='\t')
        {
            continue;
        }
        else
        {
          printf("%c",a[i]);   
        }
    }

    return 0;
}
