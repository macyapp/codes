#include<stdio.h>
void db(int [],int);
void main()
{
	int a[]={1,2,3,4,5};
	int n=(sizeof(a)/sizeof(a[0]));
	printf("The array is:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	db(a,n);
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void db(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		a[i]=2*a[i];
	}
}
