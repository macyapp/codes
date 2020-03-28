#include<stdio.h>
void cbv(int x,int y)
{
	printf("Values before swap(Inside_cbv): x=%d, y=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("Values after swap(Inside_cbv): x=%d, y=%d\n",x,y);
}
void cbr(int *x,int *y)
{
	printf("Values before swap(Inside_cbr): x=%d, y=%d\n",*x,*y);
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("Values after swap(Inside_cbr): x=%d, y=%d\n",*x,*y);
}
void main()
{
	int x=5,y=7;
	printf("Values before swap(cbv): x=%d, y=%d\n",x,y);
	cbv(x,y);
	printf("Values after swap(cbv): x=%d, y=%d\n",x,y);
	printf("Values before swap(cbr): x=%d, y=%d\n",x,y);
	cbr(&x,&y);
	printf("Values after swap(cbr): x=%d, y=%d\n",x,y);
}
