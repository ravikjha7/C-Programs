#include<stdio.h>
void bubbleSort(int *arr,int n)
{
	int isSorted=0;
	int temp;
	for(int i=0;i<n-1;i++)
	{	printf("Pass number %d\n",i+1);
		isSorted=1;
		for(int j=0;j<n-i-1;j++)
		{	if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			isSorted=0;
		}
		}
		if(isSorted)
		{
			return;
		}
	}
}
void main()
{	int n;
	printf("Enter size of Array:\n");
	scanf("%d",&n);
		int arr[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter element no %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	bubbleSort(arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}