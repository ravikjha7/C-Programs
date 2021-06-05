#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("MSDhoni.txt","r");
	int count_words=0;
	int count_letters=0;
	char ch;
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch==' '||ch=='\n')
		count_words++;
		if(ch!='\n')
		count_letters++;
	}
	printf("No of Words : %d\nNo of Characters : %d\n",count_words,count_letters);
	return 0;
}