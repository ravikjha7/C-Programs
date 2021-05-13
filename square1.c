#include<stdio.h>
int sqr(int n)
{
	return n*n;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("Square of %d = %d",n,sqr(n));
	return 0;
}