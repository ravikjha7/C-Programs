#include<stdio.h>
int fact(int n)
{
	int res;
	if(n==0)
	return 1;
	res=n*fact(n-1);
	return res;
}
int main()
{
	int n=4;
	int sum=1;
	while(n)
	{
		sum = sum + fact(n);
		n--;
	}
	printf("Sum of The Series : %d",sum);
	return 0;
}