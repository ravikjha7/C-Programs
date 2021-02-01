#include<stdio.h>
int linearSearch(int arr[],int size,int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}
int binarySearch(int arr[],int size,int element)
{
	int low=0,mid,high=size-1;
	while(low<=high)
	{
		mid=(high+low/2);
		if(arr[mid]==element)
		{
			return mid;
		}
		else if(arr[mid]>element)
		{
			high=mid-1;
		}
		else if(arr[mid]<element)
		{
			low=mid+1;
		}
	}
}
void main()
{
	int arr[]={3,7,8,10,42,99};
	int size=sizeof(arr)/sizeof(int);
	int element=10;
	int searchIndex=linearSearch(arr,size,element);
	printf("The element %d is at index no %d\n",element,searchIndex);
	searchIndex=binarySearch(arr,size,element);
	printf("The element %d is at index no %d\n",element,searchIndex);
	
}