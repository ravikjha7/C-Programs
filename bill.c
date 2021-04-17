#include<stdio.h>
int main()
{
	int units;
	char *name;
	printf("Enter Name Of Costumer:\n");
	gets(name);
	printf("Enter Units consumed\n");
	scanf("%d",&units);
	if(0.8*units>100)
	{
	if(units<=200)
		printf("%s Your Bill is %0.2f rs\n",name,units*0.8);
	else if(units<=300)
		printf("%s Your Bill is %0.2f rs\n",name,(160+((units-200)*0.9)));
	else if(units<=400)
		printf("%s Your Bill is %0.2f rs\n",name,(250.00 + (units-300)));
	else
		printf("%s Your Bill is %0.2f rs\n",name,(250.00 + (units-300) + ((0.15)*(250 + (units-300)))));
	}
	else
	{
		printf("%s Your Bill is 100 rs\n",name);
	}
	return 0;
}