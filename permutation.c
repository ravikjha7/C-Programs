#include<stdio.h>
void permutation(int arr[],int n, int r){
	for(int i=0;i<n;i++)
	{
		printpermutation(arr,n,i);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	scanf("%d",&arr[i]);
	int r;
	scanf("%d",&r);
	permutation(arr,n,r);
	return 0;
}