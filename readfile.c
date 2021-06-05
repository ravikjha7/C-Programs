#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("MSDhoni.txt","r");
	if(fp==NULL)
	{
		printf("FILE NOT FOUND!!!\n");
		return 0;
	}
	char ch;
	printf("Data Readed Successfully\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}