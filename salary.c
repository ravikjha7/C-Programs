#include<stdio.h>
void main()
{
	int yos,sal;
	char quali,sex;
	printf("Enter your sex	 Years of Service	 Qualification(P for Post Graduation & G for Graduation):\n");
	scanf("%c %d %c",&sex,&yos,&quali);
	if(sex=='M')
	{   if(yos>=10)
			{
				if(quali=='P')
				sal=15000;
				else
				sal=10000;
			}
		else
		{
			if(quali='G')
			sal=10000;
			else
			sal==7000;
		}
	}
	else
	{
		if(yos>=10)
			{
				if(quali=='P')
				sal=12000;
				else
				sal=9000;
			}
		else
		{
			if(quali='G')
			sal=10000;
			else
			sal==6000;
		}
			
	}
	printf("Your Salary will be:%d",sal);
}