#include<stdio.h>
#include<string.h>
void main()
{	int flag=0;
	char masterlist[7][20];
	printf("Enter the names of people in masterlist:\n");
	for(int i=0;i<7;i++)
	{
		scanf("%s",&masterlist[i][0]);
	}
	char name[20];
	printf("Enter your name:\n");
	scanf("%s",name);
	for(int i=0;i<7;i++)
	{	int a;
		a=strcmp(&masterlist[i][0],name);
		if(a==0)
		{
			printf("Welcome to The Lunatic Asylum\n");
			flag=1;
			break;
		}
	}
		if(flag==0)
		{
			printf("Get out!!!!");
		}
}