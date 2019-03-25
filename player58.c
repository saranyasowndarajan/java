##include <stdio.h>
#include <string.h>
#include<stdlib.h>
int counting(char * str, char * sub);
int main()
{
    char str[100];
    char sub[10];
    int count;
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to search occurrences: ");
    gets(sub);
    count = counting(str, sub);
    printf("Total occurrences of '%s': %d", sub, count);
    return 0;
}
int counting(char * str, char * sub)
{
    int i, j, flag, count;
    int s1, s2;
    s1 = strlen(str);     
    s2 = strlen(sub);
    count = 0;
    for(i=0; i <= s1-s2; i++)
    {
        flag = 1;
        for(j=0; j<s2; j++)
        {
            if(str[i + j] != sub[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            count++;
        }
    }
    return count;
}
