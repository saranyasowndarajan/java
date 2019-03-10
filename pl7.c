#include<stdio.h> 
#include<string.h>
int main() 
{ 
    char *p;
    scanf("%s",p);
    int l=strlen(p);
     char temp;
     int i=0;
    while(i%2==0 && i<l)
        {
        temp=p[i];
        p[i]=p[i+1];
        p[i+1]=temp;
        i++;
        }
       /* else
        {
        temp=p[i];
        p[i]=p[i-1];
        p[i-1]=temp;
        }*/
   printf("%s",p);
return 0; 
} 
