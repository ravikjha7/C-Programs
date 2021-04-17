#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 Numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
				printf("Max : %d Min : %d\n",a,c);
			else
				printf("Max : %d Min : %d\n",a,b);
		}
		else
		{
			if(a>b)
				printf("Max : %d Min : %d\n",c,b);
			else
				printf("Max : %d Min : %d\n",c,a);
		}
	}
	else
	{
		if(b>c)
		{
			if(a>c)
				printf("Max : %d Min : %d\n",b,c);
			else
				printf("Max : %d Min : %d\n",b,a);
		}
		else
		{
			if(a>b)
				printf("Max : %d Min : %d\n",c,b);
			else
				printf("Max : %d Min : %d\n",c,a);
		}
	}
	return 0;
}