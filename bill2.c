#include<stdio.h>
int main()
{
	int units;
	scanf("%d",&units);
	if(units>=100)
		printf("Bill is %0.2f",0.9*units);
	else
		printf("Bill is %0.2f",0.8*units);
	return 0;
}