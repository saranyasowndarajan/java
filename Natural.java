import java.io.*;
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
  int sum=0;
  Scanner in=new Scanner (System.in);
  int n=in.nextInt();
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
     }
     System.out.println(sum);
}
}
