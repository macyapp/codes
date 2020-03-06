#include<stdio.h>
#include<math.h>
int dig(int x)
{
    int p=0;
    while(x!=0)
    {
        x/=10;
        p++;
    }
    return p;
}
int main()
{
    int num,n,z,m;
    m=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    n=num;
    z=dig(num);
    while(num!=0)
    {
        m+=pow(num%10,z);
        num/=10;
    }
    if(m==n)
        printf("%d is an Armstrong Number\n",n);
    else
        printf("%d is not an Armstrong Number\n",n);
}