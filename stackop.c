#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void push();
void pop();
void peek();
void traverse();
int top=-1,stack[CAPACITY];
int isFull();
int isEmpty();
void main()
{
	int n;
	while(1)
	{
	printf("Enter your Choice:\n");
	printf("1.Push\n");
	printf("2.Pop\n");
	printf("3.Peek\n");
	printf("4.Traverse\n");
	printf("5.Quit\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		   push();
		   break;
		case 2:
		   pop();
		   break;
		case 3:
		   peek();
		   break;
		case 4:
		   traverse();
		   break;
		case 5:
		  exit(1);
		default:
		  printf("Invalid options...\n");
	}
	}
}
void push()
{	int n;
	if(isFull())
	{
		printf("Stack overflow\n");
	}
	else
	{
		printf("Enter element to be pushed:\n");
		scanf("%d",&n);
		top++;
		stack[top]=n;
		printf("%d pushed\n",n);
	}
}
int isFull()
{
	if(top==CAPACITY-1)
	return 1;
	else
	return 0;
}
void pop()
{
	if(isEmpty())
	{
		printf("Stack Underflow\n");
	}
	else{
	printf("%d poped\n",stack[top]);
		top--;}
}
int isEmpty()
{
	if(top==-1)
	return 1;
	else
	return 0;
}
void peek()
{
	if(isEmpty())
	{
		printf("Stack is Empty\n");
	}
	else{
	printf("peek element:%d\n",stack[top]);
		}
}
void traverse()
{
	if(isEmpty())
	{
		printf("Stack is Empty\n");
	}
	else{
	printf("The stack elements are:\n");
	for(int i=0;i<=top;i++)
	{
		printf("%d\n",stack[i]);
	}
		}
}