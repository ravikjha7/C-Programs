#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	fp= fopen("MSDhoni.txt","a+");
	char ch;
	fp1=fopen("Copy.txt","r");
	while((ch=fgetc(fp1))!=EOF)
	{	
		fputc(ch,fp);
	}
	fclose(fp1);
	fclose(fp);
	remove("Copy.txt");
	printf("File Merged SuccessFully\n");
	fp=fopen("MSDhoni.txt","r");
	fp1=fopen("new.txt","w");
	while((ch=fgetc(fp))!=EOF)
	{	
		fputc(ch,fp1);
	}
	fclose(fp);
	fclose(fp1);
	printf("New File Created and Data Stored\n");
	return 0;
}