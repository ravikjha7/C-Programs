#include<stdio.h>
int main()
{
	int arr[10];
	int sum=0;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	float avg=sum/10.00;
	printf("Sum = %d\nAverage = %.2f",sum,avg);
	return 0;
}
