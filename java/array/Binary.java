import java.util.Scanner;

public class Binary
{
    public static void main(String[] args)
    {
        int a[] = {5,10,15,20,25,30,35,40,45,50};
        int flag,l,i,u,n;
        flag=l=i=0;
        u=a.length-1;
        Scanner input=new Scanner(System.in);
        System.out.println("Enter number : ");
        n=input.nextInt();
        while(l<=u)
        {
            i=(l+u)/2;
            if(n>a[i])
            {
                l=i+1;
            }
            else if(n<a[i])
            {
                u=i-1;
            }
            else
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
        input.nextLine();
    }
}
