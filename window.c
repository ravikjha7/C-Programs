/*Given a sliding window of size k print the maximum of the numbers under the sliding window. 
Example: Consider a sliding window of size k equals 3. Let the array be [3,2,7,6,5,1,2,3,4] the output should print 7 as the first output as first window contains {3,2,7} and second window contains {2,7,6} and so on and the final output is {7,7,7,6,5,3,4} 
Input : 

Enter the size of array : 9 
[3,2,7,6,5,1,2,3,4] 
Enter the size of window : 3 

Output: [7,7,7,6,5,3,4]*/
#include<stdio.h>
#include<limits.h>
void windowsort(int *arr,int n,int window)
{	int max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<i+window;j++)
		{
			if(arr[j]>max)
			{
				max=arr[j];
			}
		}
		arr[i]=max;
	}
}
void main()
{
	int n;
	printf("Enter Size of Array:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{	printf("Enter element no. %d:\n",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter size of window:\n");
	int window;
	scanf("%d",&window);
	windowsort(arr,n,window);
		for(int i=0;i<n-window+1;i++)
	{
		printf("%d ",arr[i]);
	}
}