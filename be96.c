#include<stdio.h>
#include<math.h>
int main() {
	int a,d,n,i,tn;
	int sum=0;
		scanf("%d",&a);
		scanf("%d",&n);
		scanf("%d",&d);
	sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
	tn = a + (n-1) * d;
		for (i=a;i<=tn; i= i + d ) {
		if (i != tn)
		             printf("%d + ",i); 
                 else
		             printf("%d = %d ",i,sum);
	}
	return 0;
}
