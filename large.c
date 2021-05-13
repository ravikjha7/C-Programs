#include<stdio.h>
int max(int arr[],int n)
{
	int maxm=0;
	for(int i=0;i<n;i++)
	{
		if(maxm<arr[i])
			maxm=arr[i];
	}
	return maxm;
}
int main()
{ 
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int large = max(arr,n);
	printf("Largest Element : %d",large);
	return 0;
}