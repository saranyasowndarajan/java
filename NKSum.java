import java.io.*;
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    int sum=0;int a[]=new int[5];
  Scanner in=new Scanner (System.in);
  int N= in.nextInt();
  int K=in.nextInt();
  for(int i=0;i<N;i++)
  {
    a[i]=in.nextInt();
  }
 for(int i=0;i<K;i++)
  {
   sum= sum+a[i];
  }
     System.out.println(sum);
}
}
