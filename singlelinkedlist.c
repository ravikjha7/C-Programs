#include<stdio.h>
#include<stdlib.h>
struct node
{	
	int data;
	struct node *link;
};
struct node *root=NULL;
void append()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter Node Data:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
		temp=NULL;
		free(temp);
	}
}
void addatbegin()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter Node Data:\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		temp->link=root;
		root=temp;
		temp=NULL;
		free(temp);
	}
}
int length()
{
	int count=0;
	struct node *p;
	
	p=root;
		while(p!=NULL)
		{	count++;
			p=p->link;
		}
	return count;
}
void addatafter()
{	struct node *p,*temp;
	int i=1;
	int len=length();
	int loc;
	printf("Enter location to insert:\n");
	scanf("%d",&loc);
	if(loc>len)
	{
		printf("Invalid Location\n");
		printf("Current size of Linkedlist is %d",len);
	}
	else
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("Enter Node Data:\n");
		scanf("%d",&temp->data);
		temp->link=NULL;
		p=root;
		while(i<loc)
		{
			p=p->link;
			i++;
		}
		temp->link=p->link;
		p->link=temp;
		
	}
}
void delete()
{
	struct node *temp,*p;
	int len=length();
	int loc,i=1;
	printf("Enter location to delete:\n");
	scanf("%d",&loc);
	if(loc>len)
	{
		printf("Invalid option\n");
	}
	else if(loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else{
		temp=root;
		while(i<loc-1)
			{
				temp=temp->link;
				i++;
			}
			p=temp->link;
			temp->link=p->link;
			p->link=NULL;
			free(p);
	}
}
void display()
{
	struct node *p;
	if(root==NULL)
	{
		printf("List is Empty\n");
	}
	else
	{
	p=root;
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->link;
	}
	printf("\n\n");
	}
}
void main()
{
	int ch,len;
	while(1)
	{
		printf("Enter one option\n");
		printf("1.Append\n");
		printf("2.Addatbegin\n");
		printf("3.Addatafter\n");
		printf("4.Length\n");
		printf("5.Display\n");
		printf("6.Delete\n");
		printf("7.Quit\n");
		scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			append();
			break;
		case 2:
			addatbegin();
			break;
		case 3:
			addatafter();
			break;
		case 4:
			len=length();
			printf("Length=%d\n",len);
			break;
		case 5:
			display();
			break;
		case 6:
			delete();
			break;
		case 7:
			exit(1);
			break;
		default:
			printf("Invalid Input\n");
	}
	}
}