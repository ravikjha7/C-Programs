/*Write a C program to accept two integers and check whether they are
equal or not.*/
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a==b)
	{
		printf("Equal\n");
	}
	else
	{
		printf("Not Equal\n");
	}
	return 0;
}