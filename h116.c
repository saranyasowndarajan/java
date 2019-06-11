import java.util.*;

class Main {
  public static void main(String[] args) {
    System.out.println("Enter S1");
    Scanner s = new Scanner(System.in);    
    String s1 = s.next();
    System.out.println("Enter S2");
    String s2 = s.next();
    String s3 = "";
    int k =1;
    char a1[] = s1.toCharArray();
    char a2[] = s2.toCharArray();
    int l1 = a1.length;
    int l2 = a2.length;
    int l;
    if(l1 > l2)
    {
      l = l1;
    }
    else{
      l = l2;
    }
    for(int i=0;i<l;i++)
    {
     
      if(l1 > l2 )
      {
         s3 = s3 + a1[i];
        if (i+1 > l2)
        {
          s3 = s3 + k;
          k=k+1;
        }
        else
        {
          s3 = s3 + a2[i];
        }
      }
      else
      {
         
        if (i+1 > l1)
        {
          s3 = s3 + k;
          s3 = s3 + a2[i];
          k=k+1;
        }
        else
        {
          s3 = s3 + a1[i];
          s3 = s3 + a2[i];
        }
      }
    }
    System.out.print(s3);
    
  }  
}
