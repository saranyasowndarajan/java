#include <stdio.h>
 
int check_anagram(char [], char []);
 
int main()
{
 char a[100][100], b[100];
 int n,count=0;
  printf("Enter a string\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      scanf("%s",a[i]);
  }
  printf("Enter a string\n");
  scanf("%s",b);
  for(int i=0;i<n;i++)
  {
   if (check_anagram(a[i], b) == 1)
   count++;
  }
  printf("%d",count);
  return 0;
}
 
int check_anagram(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c=0;
 
    while (a[c] != '\0')
  {
    first[a[c]-'a']++;
    c++;
  }
   c = 0;
   while (b[c] != '\0')
  {
    second[b[c]-'a']++;
    c++;
  }
  for (c = 0; c < 26; c++)
  {
    if (first[c] != second[c])
      return 0;
  }
 
  return 1;
}
