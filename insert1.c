#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int new;
	scanf("%d",&new);
	int loc=0;
	while(new>=arr[loc])
	{
		loc++;
	}
	for(int i=n;i>loc;i--)
	{	
		arr[i]=arr[i-1];
	}
	arr[loc]=new;
	for(int i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}