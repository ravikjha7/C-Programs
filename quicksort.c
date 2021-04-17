#include<stdio.h>
void printArray(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[low];
	int i=low+1;
	int j=high;
	int temp;
	do
	{
		while(arr[i]<=pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}while(i<j);
	
	temp=arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	
	return j;
}
void quicksort(int arr[],int low,int high)
{	int pindex;
	printf("Running Quick Sort...\n");
	if(low<high)
	{
		
		pindex=partition(arr,low,high);
		quicksort(arr,low,pindex-1);
		quicksort(arr,pindex+1,high);
	}
}
void main()
{
	int arr[]={7,3,99,8,25,42,1};
	int n=7;
	printArray(arr,n);
	quicksort(arr,0,n-1);
	printArray(arr,n);
}