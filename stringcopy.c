#include<stdio.h>
#include<string.h>
int main()
{
	char *str;
	gets(str);
	int len=strlen(str);
	char new[len];
	for(int i=0;i<len;i++)
	{
		new[i]=str[i];
	}
	printf("Copied Into Another String\n");
	for(int i=0;i<len;i++)
	{
		printf("%c",new[i]);
	}
	return 0;
}