#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	long int sum=1;
	int res=1;
	for(int i=1;i<n;i++){	
		res = 1 + res*10;
		sum = res + sum;
	}
	printf("Sum = %d",sum);
	return 0;
}