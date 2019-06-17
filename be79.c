#include <math.h>
 
int main()
{
    int num;
    int iVar1, iVar2,iVar3;
    float fVar1,fVar2;
  //  printf("Enter an integer number: ");
    scanf("%d %d",&iVar1,iVar2);
    iVar3=iVar1*iVar2;
      fVar1=sqrt((double)iVar3);
    iVar3=fVar1;
     if(iVar3==fVar1)
        printf("yes");
    else
        printf("no");
      
    return 0;
}
