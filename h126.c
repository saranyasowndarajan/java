#include <stdio.h>
#define MAX 100
int main()
{
	char str[MAX]={0};	
	int i,word=0;
	scanf("%[^\n]s",str); 
	//capitalize first character of words
	for(i=0; str[i]!='\0'; i++)
	{
		//check first character is lowercase alphabet
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
			{ word++;
			  continue; }
		}
		if(str[i]==' ')//check space
		{
			//if space is found, check next character
			++i;
			//check next character is lowercase alphabet
			if(str[i]>='a' && str[i]<='z')
			{
				word++;
				continue; //continue to the loop
			}
			else
		{
			//all other uppercase characters should be in lowercase
			if(str[i]>='A' && str[i]<='Z')
				str[i]=str[i]+32; //subtract 32 to make it small/lowercase
		}
		}
		}
	if(word<=0)
	printf("yes");
	else
	printf("no");
	return 0;
}
