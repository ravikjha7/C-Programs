#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("MSDhoni.txt","r");
	if(fp==NULL)
	{	
		printf("File Not Found\n");
		return 0;
	}
	char ch;
	int count=0;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n')
		count++;
	}
	printf("Number Of Lines : %d\n",count);
	fclose(fp);
	return 0;
}