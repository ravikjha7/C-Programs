#include<stdio.h>
int main()
{	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<n+1;i++)
	{
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\nSum = %d",sum);
	return 0;
}