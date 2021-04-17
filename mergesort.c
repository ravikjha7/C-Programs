#include<stdio.h>
void printArray(int A[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
}
void merge(int A[],int low,int high,int mid)
{
	int i=low,j=mid+1;
	int k=low,B[high+1];
	while(i<=mid&&j<=high)
	{
		if(A[i]<A[j])
		{
			B[k]=A[i];
			i++;
			k++;
		}
		else
		{
			B[k]=A[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		B[k]=A[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		B[k]=A[j];
		j++;
		k++;
	}
	for(i=low;i<=high;i++)
	{
		A[i]=B[i];
	}
}
void mergeSort(int A[],int low,int high)
{	printf("Running Merge Sort....\n");
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergeSort(A,low,mid);
		mergeSort(A,mid+1,high);
		merge(A,low,high,mid);
	}
}
void main()
{
	int arr[]={3,99,7,8,25};
	int n=5;
	printArray(arr,n);
	mergeSort(arr,0,n-1);
	printArray(arr,n);
}