#include<stdio.h>
#include<string.h>
void main()
{
	FILE *fp;
	char *string;
	fp=fopen("txt.txt","w");
	if(fp==NULL)
	{
		printf("Unable to open the file!!!\n");
	}
	else
	{
		printf("Enter a string:\n");
		gets(string);
		while(string[i]!=EOF)
		{
			fputs(string,fp);
			fputs("\n",fp);
			
		}
		fclose(fp);
	}
}