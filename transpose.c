#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Transpose is\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}