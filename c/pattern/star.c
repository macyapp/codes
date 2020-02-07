#include<stdio.h>
void main()
{
  int i,j,n=9;
  for(i=1;i<=n;i++)
  {
    for(j=n-1;j>=i;j--)
    {
      printf("  ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
    for(j=i-1;j>=1;j--)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  n-=1;
  for(i=n;i>=1;i--)
  {
    for(j=n;j>=i;j--)
    {
      printf("  ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
    for(j=i-1;j>=1;j--)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
}
