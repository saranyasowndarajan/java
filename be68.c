// CPP program to round the given 
// integer to a whole number 
// which ends with zero. 
#include <bits/stdc++.h> 
using namespace std; 

// function to round the number 
int round(int n) 
{ 
	// Smaller multiple 
	int a = (n / 7) * 7; 
	
	// Larger multiple 
	int b = a + 7; 

	// Return of closest of two 
	return (n - a > b - n)? b : a; 
} 

// driver function 
int main() 
{ 
	int n ;
  scanf("%d",&n);
	printf("%d",round(n)); 
	return 0; 
} 
