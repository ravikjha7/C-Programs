#include<stdio.h>
void main()
{
int j=12,k=10;
if(j>k)
{
	{
	j=k;
	k=j;
	}
}
printf("j=%d k=%d\n",j,k);
}