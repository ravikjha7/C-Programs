/*Write a program in C to display the n terms of even natural number and
their sum.*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int sum=0;
	for(int i=2;i<=2*n;i++)
	{
		if(i%2==0){
			printf("%d ",i);
			sum =sum+i;
		}
	}
	printf("\nSum = %d",sum);
	return 0;
}