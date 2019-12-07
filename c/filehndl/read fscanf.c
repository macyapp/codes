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
	while(fscanf(fp,"%s",text)==1)
	{
		printf("%s ",text);
	}
	printf("\n");
	fclose(fp);
}
//Reading a text file.
