#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("txt.txt","r");
	if(fp==NULL)
	{
		printf("FILE NOT FOUND!!!");
	}
	else
	{
		int count=0;
		char ch;
		while((ch=fgetc(fp))!=EOF)
		{
			count++;
		}
		printf("No of characters: %d",count);
	}
}