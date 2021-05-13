#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int m=2*n;
	int arr1[n],arr2[n],arr[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<n;i++)
	{
		arr[i]=arr1[i];
	}
	for(int i=0;i<n;i++)
	{
		arr[i+n]=arr2[i];
	}
	int temp;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m-i-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}