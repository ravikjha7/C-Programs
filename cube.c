/*Write a program in C to display the cube of the number upto given an
integer.*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("Cube of %d is %d\n",i,i*i*i);
	}
	return 0;
}