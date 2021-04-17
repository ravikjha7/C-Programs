#include<stdio.h>
void printArray(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void insertionSort(int *arr,int n)
{
	int key;
	int j;
	for(int i=1;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0&&key<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
void main()
{
	int arr[]={7,3,8,99,25};
	int n=5;
	printArray(arr,n);
	insertionSort(arr,n);
	printArray(arr,n);
}