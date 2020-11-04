#include<stdio.h>
void main()
{
	int age;
	char sex,ms;
	printf("Enter age sex Martial Status:\n");
	scanf("%d %c %c",&age,&sex,&ms);
	if((ms=='M')||(sex='M'&&age>=30)||(sex='F'&&age>=25))
	printf("You Are Eligible For The Job");
	else
	printf("You Are Not Eligible For The Job");
}