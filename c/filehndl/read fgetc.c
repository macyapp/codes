#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	int i,c;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("The file couldn't be opened.\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
}
//Reading a text file.
