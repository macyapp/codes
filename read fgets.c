#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char text[80];
	int i,c;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("The file couldn't be opened.\n");
		exit(1);
	}
	while(fgets(text,80,fp)!=NULL)
	{
		printf("%s",text);
	}
	fclose(fp);
}
//Reading a text file.
