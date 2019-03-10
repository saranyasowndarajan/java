#include<stdio.h> 
int areIsomorphic(char *str1, char *str2) 
{ 

	int m = strlen(str1), n = strlen(str2); 
	if (m != n) 
	return 0; 
	int marked[256] = {0}; 
	int map[256]; 
	memset(map, -1, sizeof(map)); 
	for (int i = 0; i < n; i++) 
	{ 
		if (map[str1[i]] == -1) 
		{ 
			if (marked[str2[i]] == 1) 
				return 0; 			
			marked[str2[i]] = 1; 
			map[str1[i]] = str2[i]; 
		} 
		else if (map[str1[i]] != str2[i]) 
			return 0; 
	} 

	return 1; 
} 
int main() 
{ 
char *s1,*s2;
scanf("%s %s",s1,s2);
    int s1=areIsomorphic(s1,s2);
    if(s1==0)
    printf("yes");
    else
    printf("yes");
return 0; 
} 
