#include<stdio.h>
int add(int x,int y); //Function Declaration
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int c = add(a,b); //Function Calling
	printf("%d + %d = %d",a,b,c);
	return 0;
}
int add(int x,int y) //Function Definition
{
	return x+y;
}