#include<stdio.h>
#include<string.h>
int max (int x, int y) {
   return (x > y)? x : y;
}
int fun(char str[100]) {
    printf("%s",str);
   int n = strlen(str);
   int array[n][n];           
   for (int i = 0; i < n; i++)
      array[i][i] = 1;            
   for (int col=2; col<=n; col++) {
      for (int i=0; i<n-col+1; i++) {
         int j = i+col-1;
         if (str[i] == str[j] && col == 2)
            array[i][j] = 2;
         else if (str[i] == str[j])
            array[i][j] = array[i+1][j-1] + 2;
         else
            array[i][j] = max(array[i][j-1], array[i+1][j]);
      }
   }
   return array[0][n-1];
}

int main() {
   char sequence[100];
   scanf("%s",sequence);
   int n = strlen(sequence);
   printf("%d",n);
   printf("%s",fun(sequence));
}

