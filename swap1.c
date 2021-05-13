#include<stdio.h>
void swap(int *a,int *b)
{
	*a=*a^*b;
	*b=*a^*b;
	*a=*a^*b;
	return;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("The Numbers Are Swapping are %d and %d",a,b);
	return 0;
}