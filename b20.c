#include <stdio.h>
#include <math.h>

int main()
{
  int multiplesFound = 0; //track how many multiples found
		int currentNumber = 1; //start checking at 1
		do {
			if(currentNumber % 5 == 0) {
				multiplesFound++;
printf("Found multiple of 5:%d ", currentNumber);
			}
			currentNumber++;
		} while(multiplesFound<5);
    return 0;
}
