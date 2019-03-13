#include <stdio.h>
#include <string.h>

int main()
{   char a[100];
int count=0;
   printf("Enter Paragraph : ");
   scanf("%[^\t]s", a);
    for(int i=0;i<strlen(a)+1;i++)
    {
        if(a[i]=='\n')    {
          count++;
        }
    }
    printf("%d",count);
    return 0;
}
