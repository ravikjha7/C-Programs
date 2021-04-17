/*Write a program to increase the number in odd position by 1.
input : int a[] = {2,3,4,5,6,7,8,9}
output: {3,3,5,5,7,7,9,9}*/
#include<stdio.h>
void main()
{
	int arr[]={2,3,4,5,6,7,8,9};
	int n=8;
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			arr[i]++;
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}