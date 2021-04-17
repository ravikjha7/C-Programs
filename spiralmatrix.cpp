#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	int row_s=0,column_s=0,row_e=n-1,column_e=m-1;
	int i=row_s;
	while(row_e>=row_s)
	{
	for(int j=column_s;j<column_e;j++)
	{
		cout<<arr[i][j]<<" ";
	}
	column_e--;
	for(i=row_s;i<row_e;i++)
	{
		cout<<arr[i][j]<<" ";
	}
	row_e--;
	row_s++;
	for(int j=column_e-1;j>=column_s;j--)
	{
		cout<<arr[i][j]<<" ";
	}
	column_s++;
	for(i=row_e-1;i>=row_s;i--)
	{
		cout<<arr[i][j]<<" ";
	}
	}
	return 0;
}