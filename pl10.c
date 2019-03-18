#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    scanf("%s %s",a,b);
    int l1= strlen(a)-1;
    int l2=strlen(b)-1;
    int count=0;
    if(l1==l2)
    {
        //printf("equal");
        for(int i=0;i<=l1;i++)
        {
            if(a[i]==b[i])
            {
                count++;
            }
            else
            continue;
        }
        if(count==l1)
        {
        printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("no");
    }
    return 0;
}
