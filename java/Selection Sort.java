public class Selection
{
    public static void main(String[] args)
    {
        int[] a = {5,3,8,4,9,2,1,12,90,15};
        int i,j,small,tmp,pos;
        for(i=0;i<a.length;i++)
        {
            small = a[i];
            pos = i;
            for(j=i+1;j<a.length;j++)
            {
                if(a[j] < small)
                {
                    small =  a[j];
                    pos = j; 
                }
            }
        tmp = a[i];
        a[i] = a[pos];
        a[pos] = tmp;
        }
        System.out.println("Array in descending order is --> ");
        for(i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
    }
}
