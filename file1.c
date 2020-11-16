#include<stdio.h>
void main()
{	int ch;
	FILE* fp1;
	FILE* fp2;
	fp1=fopen("D:/C Language/main.c","r");
	fp2=fopen("D:/C Language/fileout.c","w");
	  while((ch=fgetc(fp1))!=EOF)
	  {
		fputc(ch,fp2);
	  }
printf("File Copied");
}