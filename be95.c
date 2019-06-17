
#include <stdio.h>

int main()
{
    float principle, time, rate, SI;
       scanf("%f", &principle);
   scanf("%f", &time);
       scanf("%f", &rate);
    SI = (principle * time * rate) / 100;
    printf("Simple Interest = %f", SI);
    return 0;}
