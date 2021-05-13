#include<stdio.h>
int main()
{
	int a=10;
	int *ptr;//Declaration Of Pointer
	ptr=&a;//Referencing The Pointer
	printf("%d",*ptr);//Dereferencing The Pointer
	return 0;
}