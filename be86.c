#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
char * is_isogram(char *str) 
{ 
	int len = strlen(str); 
	int i,j;
	char temp;
for ( i = 0; i < len; i++) 
		str[i] = tolower(str[i]); 
for (i = 0; i < len-1; i++) {
      for (j = i+1; j < len; j++) {
         if (str[i] > str[j]) {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
         }
      }
   }
	for (int i = 0; i < len; i++) { 
		if (str[i] == str[i + 1]) 
			return "no"; 
	} 
	return "yes"; 
} 
int main() 
{ 
	char str1[10]; 
  scanf("%s",str1);
printf("%s",is_isogram(str1));
return 0; 
} 
