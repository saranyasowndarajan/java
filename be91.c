#include <stdio.h>
#include <math.h>
 
int main()
{
    float width, length, height;
    float surfacearea, volume, space_diagonal;
    scanf("%f%f%f", &width, &length, &height);
    surfacearea = 2 *(width * length + length * height +
    height * width);
    volume = width * length * height;
    space_diagonal = sqrt(width * width + length * length +
    height * height);
    printf("Surface area of cuboids is: %.3f", surfacearea);
    printf("\n Volume of cuboids is : %.3f", volume);
      return 0;
}
