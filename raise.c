#include<stdio.h>
void main()
{
	int n,m,res;
	printf("Enter the values of n m:\n");
	scanf("%d %d",&n,&m);
	res=n;
	for(int i=2;i<=m;i++)
	{
		res=res*n;
	}
	printf("%d^%d=%d",n,m,res);
}