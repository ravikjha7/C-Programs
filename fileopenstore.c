#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("MSDhoni.txt","w");
	if(fp==NULL)
	{
		printf("File Not Found\n");
	}
	else{
	fprintf(fp,"MS Dhoni is A Legend");
	printf("Data Stored\n");
	}
	fclose(fp);
	return 0;
}