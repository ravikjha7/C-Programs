/*Write a program to arrange numbers in ascending order from given array. 
Conditions:
=>first sort odd numbers in ascending order and then even numbers
input : int[] a = {4,2,5,12,13,1,6}
output : {1,5,13,2,4,6,12}*/
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int maximum(int *arr,int n)
{
	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
void countSort(int *arr,int n)
{	int i;
	int max=maximum(arr,n);
	int *count=(int *)malloc((max+1)*(sizeof(int)));
	for(i=0;i<=max;i++)
	{
		count[i]=0;
	}
	for(i=0;i<n;i++)
	{
		count[arr[i]]++;
	}
	int j=0;
	i=0;
	while(j<=max)
	{
		if(count[j]>0)
		{
			arr[i]=j;
			count[j]--;
			i++;
		}
		else
		{
			j++;
		}
	}
	
}
void main()
{
	int arr[]={4,2,5,12,13,1,6};
	int n=7;
	int B[3];
	int C[4];
	int j=0;
	int i=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			B[j]=arr[i];
			j++;
		}
	}
	int k=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			C[k]=arr[i];
			k++;
		}
	}
	countSort(B,3);
	countSort(C,4);
	for(i=0;i<=2;i++)
	{
		arr[i]=B[i];
	}
	for(i=0;i<=3;i++)
	{
		arr[3+i]=C[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}