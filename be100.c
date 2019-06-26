#include<stdio.h>  
int main(void)
{       
    int num, rem, prod = 1;
         scanf("%d", &num);
     while(num != 0)
    {
        rem = num % 10; 
        prod *= rem; 
        num /=  10;  
    }    
    printf("%d", prod);
        return 0; 
}
