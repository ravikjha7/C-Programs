#include<stdio.h>
void main()
{
	int age;
	char sex,ms;
	printf("Enter age sex Martial Status:\n");
	scanf("%d %c %c",&age,&sex,&ms);
	if(ms=='M')
	printf("You are eligible for the Job\n");
	else
	{
		if(sex=='M')
		{
		if(age>=30)
		printf("You are eligible for the Job");
		else
		printf("You are not eligible for the Job");
		}
		else
		{
		if(age>=25)
		printf("You are eligible for the Job");
		else
		printf("You are not eligible for the Job");
		}
	}	
}