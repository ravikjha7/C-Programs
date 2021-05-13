#include<stdio.h>
int fact(int *n)
{
	if(*n==0)
	return 1;
	int r=*n-1;
	int res = *n * fact(&r);
	return res;
}
int main(){
	int n;
	scanf("%d",&n);
	int res = fact(&n);
	printf("Factorial = %d",res);
	return 0;
}