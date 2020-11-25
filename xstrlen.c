#include<stdio.h>
void main()
{
	int count=0,i=0;
	char string[50];
	printf("Enter a string:\n");
	gets(string);
	while(string[i]!='\0')
	{
		count++;
		i++;
	}
	printf("The length of string:%d\n",count);
}