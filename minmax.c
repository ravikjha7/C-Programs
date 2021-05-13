#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	printf("Enter Size of Array:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("Smallest Number : %d\n",min);
	printf("Biggest Number : %d\n",max);
	return 0;
}