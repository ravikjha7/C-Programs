#include<stdio.h>
int add(int *a,int *b){
	int c;
	c= *a + *b;
	return c;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int sum=add(&a,&b);
	printf("%d + %d = %d",a,b,sum);
	return 0;
}