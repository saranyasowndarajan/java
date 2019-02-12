#include <stdio.h> 
int printAllAPTriplets(int arr[], int n) 
{ 
  printf("\n");
  int count=0;
  for (int i = 1; i < n - 1; i++)  
        {
          for (int j = i - 1, k = i + 1; j >= 0 && k < n;) 
            { 
              printf("\n");
          if (arr[j] + arr[k] == 2 * arr[i])  
                { 
                    printf("\t %d",arr[j]);
                    printf("\t %d",arr[i]);
                    printf("\t %d",arr[k]); 
                    k++; 
                    j--; 
                    count++;
                } 
else if (arr[j] + arr[k] < 2 * arr[i])                        k++;          
                else
                    j--;          
            } 
        } 
        
        return count;
        } 
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x=printAllAPTriplets(arr, n); 
    printf("\n %d",x);
    return 0; 
} 
