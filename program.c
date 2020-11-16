#include<stdio.h>
void main()
{
	for(int i=1;i<=7;i++)
	{	if(i>1)
		{
			for(int j=65;j<73-i;j++)
		{
			printf("%c ",j);
		}
		}
		else
		{
			for(int j=65;j<73-i;j++)
		{
			printf("%c ",j);
		}
		}	
		if(i>1)
		{
			for(int k=1;k<=2*i-3;k++)
			{
				printf("  ");
			}
		}	
		if(i>1)
		{
			for(int l=72-i;l>=65;l--)
			{
				printf("%c ",l);
			}
		}
		else
		{
			for(int l=70;l>=65;l--)
			{
				printf("%c ",l);
			}
		}
		printf("\n");
	}
}