#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	int check[max+1];
	for(int i=0;i<max+1;i++)
	{
		check[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		check[arr[i]]++;
	}
	for(int i=0;i<max+1;i++)
	{
		if(check[i]!=0)
		{
			printf("%d : %d\n",i,check[i]);
		}
	}
	return 0;
}