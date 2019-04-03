#include <stdio.h>
#include <string.h>
int main()
{
    char p[100];
scanf("%s",p);
    int l = 0; 
    int h = strlen(p) - 1; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (p[l++] != p[h--]) 
        { 
            printf("yes"); 
         } 
    } 
    printf("no"); 
} 
 
