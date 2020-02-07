#include<stdio.h>
void main()
{
    int i,j,n=9;                           //Star will even from values 1 to 9
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
            printf("  ");
        }
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
         
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf("  ");
        }
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
         
        printf("\n");
    }
}
