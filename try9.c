#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	fp=fopen("Yo.txt","w");
	char ch;
	while(1)
	{
		printf("Enter a character:\n");
		scanf("%c",&ch);
		if(ch=='~')
		{
			break;
		}
		else
		{
			fputc(ch,fp);
		}
	}
}