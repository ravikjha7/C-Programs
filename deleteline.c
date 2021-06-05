#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	fp= fopen("MSDhoni.txt","r");
	char ch;
	int temp=1,line;
	printf("Enter Line No To Be Deleted\n");
	scanf("%d",&line);
	fp1=fopen("Copy.txt","w");
	printf("File Before Deleting The Line :\n\n");
	while((ch=fgetc(fp))!=EOF)
	{	printf("%c",ch);
		if(ch=='\n')
		temp++;
		if(temp!=line)
		{
			fputc(ch,fp1);
		}
	}
	fclose(fp);
	fclose(fp1);
	remove("MSDhoni.txt");
	rename("Copy.txt","MSDhoni.txt");
	fp=fopen("MSDhoni.txt","r");
	printf("\nFile After Deleting The Line :\n\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}