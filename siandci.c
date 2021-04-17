#include<stdio.h>
#include<math.h>
int main()
{
	long int p,r,n;
	float si,ci;
	printf("Enter Principal Amount:\n");
	scanf("%ld",&p);
	printf("Enter Rate Of Interest\n");
	scanf("%ld",&r);
	printf("Enter The Tenure\n");
	scanf("%ld",&n);
	si = (p*r*n)/100;
	ci = p*pow(1+r/100 , n);
	printf("The Simple Interest is %0.2f\n",si);
	printf("The Compound Interest is %0.2f\n",ci);
	return 0;
	
}