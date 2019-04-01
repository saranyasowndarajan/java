#include<stdio.h> 
int sort(int a[10],int p, int n, int c);
int main() 
{
  
int a[10], b[10], i, j, k, n,c=0;
  
scanf ("%d %d", &n, &k);
  
for (i = 0; i < n; i++)
    
    {
scanf ("%d", &a[i]);
    
}
  
for (i = 0; i < k; i++)
    
    {
      
scanf ("%d", &b[i]);
    
}
for (i = 0; i < k; i++)
    
    {
        c++;
int x=sort(a,b[i],n,c);
printf("\n %d",x);
}
return 0;

}
int sort(int a[],int p, int n, int c)
{
    a[n]=p;
    int t;
    printf("\n \n %d",a[n]);
    for(int i=0;i<n+c;i++)
    {
        if(a[i]>a[i+1])
        {
             t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
        
    }
    return t;
}


