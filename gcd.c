#include<stdio.h>
int gcd(int a,int b)
{	
	int res = b%a;
	if(res==0)
	return a;
	return gcd(res,a);
	
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int hcf=gcd(a,b);
	printf("GCD of %d and %d = %d",a,b,hcf);
	return 0;
}