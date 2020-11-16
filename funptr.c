#include<stdio.h>
int average(int a,int b)
{
	int avg=(a+b)/2;
	return avg;
}
int greetgm(int (*ptr)(int ,int ))
{	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("Good Morning\n");
	printf("Avg of %d and %d is %d\n",a,b,ptr(a,b));
}
int greetga(int (*ptr)(int ,int ))
{	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("Good Afternoon\n");
	printf("Avg of %d and %d is %d\n",a,b,ptr(a,b));
}
void main()
{
	int (*ptr)(int,int);
	ptr=&average;
	greetgm(ptr);
	greetga(ptr);
}