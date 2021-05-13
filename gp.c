#include<stdio.h>
int main()
{
	int f,r,n;
	printf("Enter First term of G.P\n");
	scanf("%d",&f);
	printf("Enter Number Of Terms in G.P\n");
	scanf("%d",&n);
	printf("Enter Common Ratio\n");
	scanf("%d",&r);
	int sum=0;
	int i=f;
	while(n--){
		sum=sum+i;
		i*=r;
	}
	printf("Sum = %d",sum);
	return 0;
}