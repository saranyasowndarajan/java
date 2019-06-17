 #include<stdio.h>
  #include<math.h>
  int main(){
             int num,giv,rem,odd=0,digit;
             //printf(" Enter an integer number: ");
             scanf("%d",&num);
             giv = num;
             num = abs(num);
             while(num>0){
             digit = num % 10;
             num = num / 10;
             rem = digit % 2;
             if(rem != 0)
             printf("%d",digit):
             }
      return 0;
  }

 
