#include<stdio.h>
int sum(int n)
{	
	if(n==0)
	return 0;
	int add=0;
	int r=n%10;
	add = add + r + sum(n/10);
	return add;
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=sum(n);
	printf("The Sum Of The Digits is %d",res);
	return 0;
}