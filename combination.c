/*Write a program in C to print all possible combinations of r elements in a given array. */
#include<stdio.h>
void combination(int arr[],int n)
{	if(n==0)
	return; 
	combination(arr,n-1);
	printf("%d ",arr[n-1]);
}
int main()
{	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	combination(arr,n);
	return 0;
}