#include<stdio.h>
#include<string.h>
void  main()
{
	char string[56]="<h1>   This is a string    </h1>";
	int c,j=0;
	for(int i=0;i<strlen(string);i++)
	{
		if(string[i]=='<')
		{
			c=0;
			continue;
		}
		else if(string[i]=='>')
		{
			c=1;
			continue;
		}
		if(c==1)
		{
		string[j]=string[i];
		j++;
		}
	}
	string[j]='\0';
	int k=0;
	while(string[0]==' ')
	{	for(k=0;k<strlen(string);k++)
		{
			string[k]=string[k+1];
		}
	}
	while(string[strlen(string)-1]==' ')
	{
		string[strlen(string)-1]='\0';
	}
	printf("The Parsed string is ~~%s~~ \n",string);
}