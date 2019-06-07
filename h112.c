include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i,j,m,n,matrix[10][10];
char x[10],y[10],matrix2[10][10]; 
void print(int i,int j)        {
      if(i==0||j==0)     
      {
            return;
      }
      if(matrix2[i][j]=='c')
      {
            print(i-1,j-1);      
            printf("%c",y[j-1]);
      }
      else if(matrix2[i][j]=='u')   /*u stands for upper*/
      {
            print(i-1,j);
      }
      else
      {
            print(i,j-1);
      }
}
void lcs()          
{
      m=strlen(x);
      n=strlen(y);      for(i=0;i<=m;i++)
            {
           matrix[i][0]=0;
           matrix2[i][0]='0';
      }
      for(j=0;j<=n;j++)
      {
           matrix[0][j]=0;
           matrix2[0][j]='0';
      }      for(i=1;i<=m;i++)
      {
           for(j=1;j<=n;j++)
           {
                if(x[i-1]==y[j-1])
                {
                      matrix[i][j]=matrix[i-1][j-1]+1;
                      matrix2[i][j]='c';
                }
                else if(matrix[i-1][j]>=matrix[i][j-1])
                {
                      matrix[i][j]=matrix[i-1][j];
                      matrix2[i][j]='u';            
                }
                else
                {
                      matrix[i][j]=matrix[i][j-1];
                      matrix2[i][j]='l';           
                }
           }
      }
}
int main()
{
      // printf("\nEnter the first sequence: \n");
       scanf("%s",x);
      // printf("\nEnter the second sequence: \n");
       scanf("%s",y);
       lcs();
    //   printf("\nThe longest common subsequence is: \n");
       print(m,n);
       return 0;
}

