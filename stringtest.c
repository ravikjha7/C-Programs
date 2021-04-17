#include<stdio.h>
void main()
{
	char str1[]= "GeeksQuizs";
	char str2[]= {'G','e','e','k','s','Q','u','i','z','s'};
	int n1= sizeof(str1)/sizeof(str1[0]);
	int n2= sizeof(str2)/sizeof(str2[0]);
	printf("%d %d",n1,n2);
}