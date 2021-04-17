#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter The Coefficient of x^2 term\n");
	scanf("%d",&a);
	printf("Enter The Coefficient of x term\n");
	scanf("%d",&b);
	printf("Enter The Coefficient of term independent of x\n");
	scanf("%d",&c);
	double d= ((b*b) - (4*a*c)),e,root1,root2;
	
	if(d>=0)
	{
		root1 = ((-b + sqrt(d))/(2*a));
		root2 = ((-b - sqrt(d))/(2*a));
		printf("%0.2lf %0.2lf are the roots of given quadratic equation\n",root1,root2);
	}
	else
		printf("The Roots Of The Given Eqn does not exists\n");
	return 0;
}