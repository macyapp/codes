import java.util.Scanner;

public class Linear
{
  public static void main(String[] args)
  {
    int a[] = {5,3,8,4,9,2,1,12,90,15};
    int flag,i,n;
    flag=0;
    Scanner input=new Scanner (System.in);
    System.out.println("Enter number : ");
    n=input.nextInt();
    for(i=0;i<a.length;i++)
    {
      if(n == a[i])
      {
        flag=1;
        break;
      }
    }
    if(flag == 1)
    {
      System.out.println("Element is present at position "+(i+1));
    }
    else
    {
      System.out.println("Element not present");
    }
  }
}
