#include <stdio.h>
#include <stdlib.h>
long ipow(long x, int n) {
    long r = 1;
    while (n) {
        if (n % 2) r *= x;
        x *= x;
        n >>= 1;
    }
    return r;
}
int main() {
    long sum = 0;
   // printf("Enter the number \n");
    long n = 0;
    for (int pos = 1; ; pos++) {
        int c = getchar() - '0';
        if (c < 0 || c > 9) break;
        sum += ipow(c, pos);
        n = 10 * n + c;
    }
  //  printf("Number is: %ld\n", n);
    printf("Powered digit sum is: %ld\n", sum);
}
