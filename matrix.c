#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,m1,n2,m2,sum=0;
	printf("Enter no of rows and columns in 1st matrix:\n");
	scanf("%d %d",&n1,&m1);
	printf("Enter no of rows and columns in 2nd matrix:\n");
	scanf("%d %d",&n2,&m2);
	int mx1[n1][m1],mx2[n2][m2];
	int mxr[n1][m2];
	if(m1!=n2)
	{
		printf("Invalid matrix multiplication\n");
		exit(0);
	}
	printf("Enter First Matrix:\n");
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=m1;j++)
		{
			scanf("%d",&mx1[i][j]);
			
		}
	}
	printf("Enter Second Matrix:\n");
	for(int i=1;i<=n2;i++)
	{
		for(int j=1;j<=m2;j++)
		{
			scanf("%d",&mx2[i][j]);
			
		}
		
	}
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=m2;j++)
		{
			for(int k=1;k<=n1;k++)
			{
				sum=sum+mx1[i][k]*mx2[k][j];
			}
			mxr[i][j]=sum;
			sum=0;
		}
	}
	printf("The resultant matrix is:\n");
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=m2;j++)
		{
			printf("%d ",mxr[i][j]);
		}
		printf("\n");
	}
}