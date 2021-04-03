import java.util.Scanner;
public class Prime
{
  public static void main(String args[])
  {
    int flag=0;
    Scanner in = new Scanner(System.in)
    System.out.println("Enter a No.");
    int n =in.nextInt();
    for(int i =2;i<n;i++)
    {
      if(n%i==0)
      {
        flag=1;
        break;
      }
     }
      if(flag==1)
        System.out.println("Not a Prime NO.");
       else
        System.out.println("Is a prime No.");
    }
   }
