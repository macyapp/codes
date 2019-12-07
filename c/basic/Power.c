#include<stdio.h>
#include<math.h>
void main()
{
  int x,y,z;
  printf("Enter a number:\n");
  scanf("%d\n",&x);
  printf("Enter a number:\n");
  scanf("%d\n",&y);
  z=pow(x,y);
  printf("The power of %d raised to %d is %d\n",x,y,z);
}
