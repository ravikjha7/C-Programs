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
	printf("Found Data Of The File\n");
	char ch;
	int count=0;
	while((ch=fgetc(fp))!=EOF)
	{	
		printf("%c",ch);
		if(ch=='\n')
		count++;
	}
	printf("\nNumber Of Lines : %d\n",count);
	return 0;
}