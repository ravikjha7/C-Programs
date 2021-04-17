#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Numbers:\n");
	scanf("%d %d",&a,&b);
	printf("Choose Your Operation(+,-,*,/)\n");
	char operator;
	scanf("%c",&operator);
	scanf("%c",&operator);
	switch(operator)
	{
		case '+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("%d * %d = %d",a,b,a*b);
			break;
		case '/':
			printf("%d / %d = %f",a,b,(float)a/b);
			break;
		default:
			printf("Invalid Option!!!");
	}
	return 0;
}