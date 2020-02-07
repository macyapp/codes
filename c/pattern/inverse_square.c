#include<stdio.h>
void main()
{
    int i,j,n=5;                           //Square will be even from values 1 to 9
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%d ",i);
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%d ",i);
        } 
        for(j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
         
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%d ",i);
        }
        for(j=1;j<=i-1;j++)
        {
            printf("%d ",i);
        }
        for(j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
         
        printf("\n");
    }
}
