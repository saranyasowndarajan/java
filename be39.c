#include<stdio.h>
#include<string.h>
void main()
{
int a[100],n;
scanf("%d",&n);
int max=a[0];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=1;i<n;i++)
{
if(max<a[i])
{
max=a[i+1];
}
}
printf("%d",max);
}
