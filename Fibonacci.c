#include<stdio.h>
void main()
{
	int n,a=0,b=1,r,c;
	printf("Enter the limit:\n");
	scanf("%d",&n);

	
	for(r=1;r<=n;r++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;

	}
}