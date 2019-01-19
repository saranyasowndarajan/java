#include <stdio.h>
#include<string.h>

int main()
{
  char a[100], b[100];
  int i,j,flag=0;
  printf("Enter a string\n");
  scanf("%s",a);
   i=0;
   j=i+1;
   while(i<strlen(a))
   {
       while(j<strlen(a))
    {
       if(a[i]<a[j])
       {
         flag=j;
         break;
       }     
       else
       {
         j++;
       } 
    }
       i++; 
  }      
   printf("%d",flag);
   printf("\n");
  for(i=flag;i<strlen(a);i++)
  {
    printf("%c",a[i]);
  }
}
