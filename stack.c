#include<stdio.h>
#include<stdlib.h>
void main()
{
	int capacity;
	int* stack;
	printf("Enter size of stack:\n");
	scanf("%d",&capacity);
	stack=(int*)calloc(capacity,sizeof(int));
	capacity++;
	stack=realloc(stack,capacity*sizeof(int));
	printf("%d\n",stack);
	printf("%d",sizeof(int));
}