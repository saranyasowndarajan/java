#include<stdio.h> 
int mr(int* arr, int n, int k) 
{ 
		for (int i = 0; i< n; i++) 
		arr[arr[i]%k] += k; 
	int max = arr[0], result = 0; 
	for (int i = 1; i < n; i++) 
	{ 
		if (arr[i] > max) 
		{ 
			max = arr[i]; 
			result = i; 
		} 
	} 
	for (int i = 0; i< n; i++) 
		arr[i] = arr[i]%k; */
	return result; 
} 
int main() 
{ 
	int arr[],n,i;
    scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
	int k = 8; 
printf("%d",mr(arr, n, k));
	return 0; 
} 
