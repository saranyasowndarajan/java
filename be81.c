#include<stdio.h>
int main()
{
int a[10],b[10],i,j;
for(i=0;;i++)
{
    char x=getchar();
    scanf("%c",x);
if(x=='0')
    break;
else
scanf("%d %d",&a[i],&b[i]);

}
for(j=0;j<i;j++)
{
int d=a[i]-b[i];
printf("%d",d);
}
return 0;
}
