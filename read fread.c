#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch[80];
	int i,c;
	fp=fopen("abc.txt","r");
	if(fp==NULL)
	{
		printf("The file couldn't be opened.\n");
		exit(1);
	}
	fread(ch,1,sizeof(ch),fp);
	printf("%s",ch);
	fclose(fp);
}
//Reading a text file.
