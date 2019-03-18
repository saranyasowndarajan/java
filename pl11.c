#include <stdio.h>
#include<string.h>
int main()
{
    char a[10];
    scanf("%s",a);
    int i=0,j=0;
    char s1[10]="sunday",s2[10]="saturday";
    i=strcmp(a,s1);
    j=strcmp(a,s2);
    if(i==0 || j==0)
    {
        printf("yes");
    }
        else
    printf("no");
    return 0;
}
