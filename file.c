#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE* fp;
	char c;
	char file_name[30];
	printf("Enter file name:\n");
	gets(file_name);
	fp=fopen(file_name,"r");
	if(fp==NULL)
	printf("File Not Found\n");
	else
	{printf("File opened In Read Mode\n");
	while((c=fgetc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);}
}