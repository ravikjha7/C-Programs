/*Write a program to get sum of individual numbers from given input
input : 5312
output: 11 //(5+3+1+2)*/
#include<stdio.h>
void main()
{
	int n=5312;
	int sum=0,r;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("%d",sum);
	
}