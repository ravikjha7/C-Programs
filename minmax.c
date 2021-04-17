/*56) Write C Program to Find smallest Element in an Array.
*/
#include<stdio.h>
#include<limits.h>
int main()
{
	int n;
	printf("Enter Size of Array:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("Smallest Number : %d\n",min);
	return 0;
}