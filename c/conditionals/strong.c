#include<stdio.h>
int fac(int x)
{
    int i;
    int p=1;
    for(i=1;i<=x;i++)
    {
        p*=i;
    }
    return p;
}
void main()
{
    int num,n,m;
    m=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    n=num;
    while(num!=0)
    {
        m+=fac(num%10);
        num/=10;
    }
    if(m==n)
        printf("%d is an Strong Number\n",n);
    else
        printf("%d is not an Strong Number\n",n);
}