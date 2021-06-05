/*Write a C program to check whether a character is an alphabet, digit or
special character*/
#include<stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if((c<91&&c>=65)||(c>=97&&c<=122))
	printf("character");
	else if(c>=48&&c<=57)
	printf("digit");
	else
	printf("special character");
	return 0;
}