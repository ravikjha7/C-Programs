#include<stdio.h>
#include<stdlib.h>
void recur(int n);
void main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("The prime factors are:\n");
	recur(n);
}
void recur(int n)
{
	if(n==1)
	{
		exit(0);
	}
	else if(n%2==0)
	{
		printf("2\n");
		n=n/2;
		recur(n);
	}
	else if(n%3==0)
	{
		printf("3\n");
		n=n/3;
		recur(n);
	}
	else if(n%5==0)
	{
		printf("5\n");
		n=n/5;
		recur(n);
	}
	else if(n%7==0)
	{
		printf("7\n");
		n=n/7;
		recur(n);
	}
	else if(n%11==0)
	{
		printf("11\n");
		n=n/11;
		recur(n);
	}
	else if(n%13==0)
	{
		printf("13\n");
		n=n/13;
		recur(n);
	}
	else if(n%17==0)
	{
		printf("17\n");
		n=n/17;
		recur(n);
	}
	else if(n%19==0)
	{
		printf("19\n");
		n=n/19;
		recur(n);
	}
	else if(n%23==0)
	{
		printf("23\n");
		n=n/23;
		recur(n);
	}
}