#include<stdio.h>
void main()
{
	FILE *fp;
	char text[80];
	int i,c;
	fp=fopen("abc.txt","w");
	printf("Enter Text:\n");
	scanf("%[^\n]",text);
	for(i=0;text[i];i++)
	{
		putc(text[i],fp);
	}
	putc('\n',fp);
	fclose(fp);
}
//Writing to a file.
