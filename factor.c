/*To find the factors of the numbers given in an array and to sort the numbers in descending order according to the factors present in it.
Input:
Given array: 8, 2, 3, 12, 16, 19

Output:
12, 16, 8, 19, 3, 2

Example
12 factors are 2,3,4,6 and 12
19 factor is 19 */
#include<stdio.h>
void main()
{
	int arr[]={8,2,3,12,16,19};
	int n=6;
	int max=maximum(arr,n);
	int *count=(int*)malloc((max+1)*sizeof(int));
	for(int i=0;i<n;i++)
	{
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				count[arr[i]]++;
			}
		}
	}
}