#include<stdio.h>
#include<stdlib.h>
void main(int argc,char* argv[])
{
	FILE *fp,*fs;
	char ch;
	if(argc!=3)
	{
		printf("Invalid Arguments\n");
	}
	else
	{
	fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
		printf("Unable to open the source file\n");
		exit(1);
	}
	fs=fopen(argv[2],"w");
	if(fs==NULL)
	{
		printf("Unable to open the target file\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fs);
	}
	fclose(fp);
	fclose(fs);
	}
	
	
}