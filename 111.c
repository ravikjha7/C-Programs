/*Write a program to print following pattern
1
111
11111
1111111
111111111*/
#include<stdio.h>
void main()
{
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=(2*i)-1;j++)
		{
			printf("1");
		}
		printf("\n");
	}
}