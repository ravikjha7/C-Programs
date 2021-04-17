#include<stdio.h>
int main()
{
	int n;
	printf("Enter One Number:\n");
	scanf("%d",&n);
	if(n%7==0)
		printf("%d is divisible by 7\n",n);
	else
		printf("%d is not divisble by 7\n",n);
	return 0;
}