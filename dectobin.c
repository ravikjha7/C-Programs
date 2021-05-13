/*Write a program in C to convert a decimal number into binary without
using an array. */
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	int i=0;
	while(n>0)
	{
		ans = (ans) + (pow(10,i)*(n%2));
		n=n/2;
		i++;
	}
	printf("%d",ans);
	return 0;
}