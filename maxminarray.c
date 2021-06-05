#include<stdio.h>
#include<limits.h>
int *minmax(int arr[],int n){
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	arr[0]=max;
	arr[1]=min;
	printf("Max : %d\nMin : %d",max,min);
	return arr;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	minmax(arr,n);
	return 0;
}