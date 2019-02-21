#include <stdio.h>
int main(void) {
 char ch;
int flag=0;
scanf("%c",&ch);
for(int i=48;i<=57;i++)
{
	if(ch==i) //Checking for ASCII value of entered character
	{ flag=1; //If it is an Integer it must have ASCII value between 48-57
		break;
	}
}
if(flag==1)
printf("Integer");
else
printf("Not Integer");
  return 0;
}
