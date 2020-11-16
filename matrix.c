#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,m1,n2,m2;
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
	for(int i=1;i<=n1;i++)
	{
		for(int j=1;j<=m1;j++)
		{
			printf("Enter row %d column %d element of 1st matrix:\n",i,j);
			scanf("%d",&mx1[i][j]);
		}
	}
	for(int i=1;i<=n2;i++)
	{
		for(int j=1;j<=m2;j++)
		{
			printf("Enter row %d column %d element of 2nd matrix:\n",i,j);
			scanf("%d",&mx2[i][j]);
		}
	}

	
	
}