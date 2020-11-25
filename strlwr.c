#include<stdio.h>
void main()
{	int i=0;
	char string[50];
	printf("Enter a string:\n");
	gets(string);
	while(string[i]!='\0')
	{
		if(string[i]>=65&&string[i]<=90)
		{
			string[i]=string[i]+32;
			i++;
		}
		
	}
	printf("New string is: %s",string);
}