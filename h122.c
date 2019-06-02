#include<stdio.h>
int findElement(int arr[], int n) 
{ 
	int prefixSum[n]; 
	prefixSum[0] = arr[0]; 
	for (int i = 1; i < n; i++) 
		prefixSum[i] = prefixSum[i - 1] + arr[i]; 
	int suffixSum[n]; 
	suffixSum[n - 1] = arr[n - 1]; 
	for (int i = n - 2; i >= 0; i--) 
		suffixSum[i] = suffixSum[i + 1] + arr[i]; 
	for (int i = 1; i < n - 1; i++) 
		if (prefixSum[i] == suffixSum[i]) 
			return arr[i]; 
	return -1; 
} 
int main() 
{ 
	int arr[10],p,i;
	scanf("%d",&p);
	for(i=0;i<p;i++)
	scanf("%d",&arr[i]);
	int n = sizeof(arr) / sizeof(arr[0]); 
	int x=findElement(arr, n);

	if(x!=-1)
	printf("yes");
	else
	printf("no");
	return 0; 
} 
