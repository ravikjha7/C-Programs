#include<stdio.h>
void main()
{
	int i;
	for(i=1;i<=10;printf("%d\n",i))
		//printf here is taken as modification hence is processed after i++.....
	{
		i++;
	}
}