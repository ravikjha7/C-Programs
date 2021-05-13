#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr1[n][m];
	printf("Enter Elements of First Matrix\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter Elements of Second Matrix\n");
	int arr2[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			arr[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("The Added Matrix is \n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}