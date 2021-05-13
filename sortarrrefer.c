#include<stdio.h>
int *sort(int *arr,int len)
{	int temp;
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(*(arr+j)>*(arr+j+1))
			{
				temp = *(arr+j);
				*(arr+j)=*(arr+j+1);
				*(arr+j+1)=temp;
			}
		}
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	printf("Your Sorted Array is \n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}