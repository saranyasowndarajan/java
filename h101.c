#include<stdio.h>
int isprime(int x) 
{ 
		for (int i=2; i*i<=x; i++) 
		if (x%i == 0) 
			return 0; 
	return 1; 
} 
int isSumOfKprimes(int N, int K) 
{ 
    int a[10],i,k;
		if (N < 2*K) 
		return 0; 
	if (K == 1) 
		return isprime(N); 

	if (K == 2) 
	{ 
		if (N%2 == 0) 
			return 1; 
		for(i=0;i<k;i++)
	        {
		    a[i]= isprime(N - 2);
		    printf("%d",isprime(N - 2));
    	    }
		return isprime(N - 2) ; 
	} 
	return 1; 
} 
int main() 
{ 
	int n,k; 
	scanf("%d %d", &n,&k);
	/*if (isSumOfKprimes (n, k)) 
		cout << "Yes" << endl; 
	else
		cout << "No" << endl; */
	return 0; 
} 
