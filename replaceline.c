#include<stdio.h>
int main()
{
	FILE *fp,*fp1;
	fp= fopen("MSDhoni.txt","r");
	char ch;
	char str[]="\nHe is The Only Captain Who Has Won All The ICC ChampionShips\n";
	int temp=1,line;
	printf("Enter Line No To Be Replaced\n");
	scanf("%d",&line);
	fp1=fopen("Copy.txt","w");
	printf("File Before Replacing The Line :\n\n");
	int count=0;
	while((ch=fgetc(fp))!=EOF)
	{	printf("%c",ch);
		if(ch=='\n')
		temp++;
		if(temp!=line)
		{
			fputc(ch,fp1);
		}
		else if(count==0){
			fputs(str,fp1);
			count++;
		}
		
	}
	fclose(fp);
	fclose(fp1);
	remove("MSDhoni.txt");
	rename("Copy.txt","MSDhoni.txt");
	fp=fopen("MSDhoni.txt","r");
	printf("\nFile After Replacing The Line :\n\n");
	while((ch=fgetc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}