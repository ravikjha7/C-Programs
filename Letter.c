#include<stdio.h>
void main()
{	
	char name[20],item[20],outlet[23];
	
	printf("Enter your name:\n");
	gets(name);
	
	printf("Enter item bought:\n");
	gets(item);
	
	printf("Enter outlet name:\n");
	gets(outlet);
	
	FILE* fp;
	fp=fopen("D:Letter.txt","a");
	
	if(fp==NULL)
	printf("File not Found\n");
	
	
}