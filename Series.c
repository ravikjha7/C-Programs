#include<stdio.h>
int fact(int n);
void main()
{
	int i;
	float sum=0,res;
	
	for(i=1;i<=7;i++)
	{
		res=(float) i/fact(i);
		sum=sum+res;
	}
printf("Sum of first seven terms of given series is %f",sum);
}

int fact(int n)
{
	int res;
	if(n==0)
	res=1;
	else
	res=n*fact(n-1);
	return res;
}