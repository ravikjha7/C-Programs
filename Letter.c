#include<stdio.h>
void main()
{	
	char name[30],item[30],outlet[33];
	
	printf("Enter customer's name:\n");
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