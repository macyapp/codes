public class Bubble
{
    public static void main(String[] args)
    {
        int[] a = {5,3,8,4,9,2,1,12,90,15};
        int i,j,tmp;
        for(i=0;i<a.length;i++)
        {
            for(j=0;j<a.length-1;j++)
            {
                if(a[j] > a[j+1])
                {
                    tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp; 
                }
            }
        }
        System.out.println("Array in ascending order is --> ");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }
}
