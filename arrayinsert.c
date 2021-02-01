#include<stdio.h>
int insert(int arr[],int element,int size,int index,int capacity)
{	if(size>=capacity)
	{
		return -1;
	}
	else
	{
	for(int i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	}
	return 1;
}
void main()
{
	int arr[10]={1,2,3,5};
	int size=4;
	int check=insert(arr,4,size,3,100);
	if(check==-1)
	{
		printf("Array Overloaded\n");
	}
	else if(check==1)
	{
		printf("Insertion done");
		size++;
	}
}