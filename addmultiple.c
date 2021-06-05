#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("MSDhoni.txt","a+");
	if(fp==NULL)
	{
		printf("Not Able To Open The File\n");
		return 0;
	}
	fputs("\nHe is The Only Captain In The World\nWho Has Won all the ICC championships\n",fp);
	printf("Multiple Lines Added\n");
	fclose(fp);
	return 0;
}