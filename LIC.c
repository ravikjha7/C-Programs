#include<stdio.h>
void main()
{
	int age,loc,health;
	char gender;
	printf("Enter Your age	Location(For city(0) village(1))   gender    Health(Poor(0) Excellent(1))\n");
	scanf("%d %d %c %d",&age,&loc,&gender,&health);
	if(age>=25&&age=<35&&loc==0&&gender=='M'&&health==1)
	printf("Your premium is Rs 4 per thousand & max policy limit Rs 2 lakh");
	else if(age>=25||age=<35&&loc==0&&gender=='F'&&health==1)
	printf("Your premium is Rs 3 per thousand & max policy limit Rs 1 lakh");
	else if(age>=25||age=<35&&loc==1&&gender=='M'&&health==0)
	printf("Your premium is Rs 6 per thousand & max policy limit Rs 10 K");
	else
	printf("You are not eligible for the policy");
	
}