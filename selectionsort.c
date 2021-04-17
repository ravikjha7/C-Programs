#include<stdio.h>
//Function to print Array
void printArray(int *arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void selectionSort(int *arr,int n)
{	printf("Running Selection Sort...\n");
	int minindex,temp;
	//Loop for number of passes
	for(int i=0;i<n-1;i++)
	{
		minindex=i;
		//Loop for comparison
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minindex])
			{
				minindex=j;
			}
		}
		//Swapping
		temp=arr[i];
		arr[i]=arr[minindex];
		arr[minindex]=temp;
	}
}
void main()
{
	int arr[]={7,99,3,8,25};
	int n=5;
	//Before Swap
	printArray(arr,n);
	selectionSort(arr,n);
	//After Swap
	printArray(arr,n);
}