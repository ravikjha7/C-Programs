#include<stdio.h>
#include<string.h>
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
	char str[100][100];
	int i=0;
	while(fgets(str[i],100,fp))
	{
		str[i][strlen(str[i])-1] = '\0';
		i++;
	}
	int len=i;
	printf("Data Stored In The Array SuccessFully\n");
	for(int i=0;i<len;i++)
	{
		printf("%s\n",str[i]);
	}
	printf("\n");
	fclose(fp);
	return 0;
}