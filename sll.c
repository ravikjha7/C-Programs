#include<stdio.h>
struct node
{
	int data;
	struct node* link;
};
struct node *root=NULL;
void insert();
void delete();
void display();
void main()
{	int n;
	while(1)
	{
	printf("Select your choice:\n");
	printf("1.Insert\n2.Delete\n3.Display\n4.Quit\n");
	scanf("%d",&n);
	switch (n)
	{
		case 1:
		   insert();
		   break;
		case 2:
		   delete();
		   break;
		case 3:
		   display();
		   break;
		case 4:
		   exit(1);
		default:
		   printf("Invalid Options!!!\n");
	}
	}
}