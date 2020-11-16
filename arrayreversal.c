#include<stdio.h>
void main()
{
	int arr[6]={1,2,3,4,5,6};
	int i,j,temp;
	j=5;
	printf("The array before reversal is:\n");
	for(i=0;i<=5;i++)
	{
		printf("%d\n",arr[i]);
	}
	i=0;
	while(j>i)
	{	
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	printf("The array after reversal is:\n");
	for(i=0;i<=5;i++)
	{
		printf("%d\n",arr[i]);
	}
}