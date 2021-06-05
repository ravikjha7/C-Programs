#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	fp=fopen("new.txt","r");
	char ch;
	fp1=fopen("encryption.txt","w");
	while((ch=fgetc(fp))!=EOF)
	{	
		ch=ch+100;
		fputc(ch,fp1);
	}
	fclose(fp);
	fclose(fp1);
	fp=fopen("new.txt","w");
	fp1=fopen("encryption.txt","r");
	while((ch=fgetc(fp1))!=EOF)
	{
		fputc(ch,fp);
	}
	printf("Data Encrypted Successfully\n");
	fclose(fp);
	fclose(fp1);
	remove("encryption.txt");
	return 0;
}