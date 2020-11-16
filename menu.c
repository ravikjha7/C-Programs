#include<stdio.h>
#include<stdlib.h>
void main()
{
	int choice;
	while(1)
	{
		printf("1.Factorial of a number\n");
		printf("2.Prime or not\n");
		printf("3.Odd or Even\n");
		printf("4.Exit\n");
		printf("What's your choice???\n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("            FACTORIAL OF A NUMBER\n\n");
				printf("Enter one Number:\n");
				scanf("%d",&choice);
				int i,fact=1;
				for(i=1;i<=choice;i++)
				{
					fact=fact*i;
				}
				if(choice==0)
					printf("0!=1\n");
				else
					printf("%d!=%d\n",choice,fact);
				break;
			
			case 2:
				printf("             PRIME NUMBER\n\n");
				printf("Enter one Number:\n");
				scanf("%d",&choice);
				int r,count=0;
				if(choice==0||choice==1)
					printf("%d is not a Prime Number\n",choice);
				else
				{
					for(r=2;r<=choice;r++)
					{
						if(choice%r==0)
						count++;
						break;
					}
					if(count==0)
						printf("%d is a prime number\n",choice);
					else
						printf("%d is not a Prime Number\n",choice);
				}
				break;
				
			case 3:
				printf("               ODD OR EVEN\n");
				printf("Enter one Number:\n");
				scanf("%d",&choice);
				if(choice%2==0)
					printf("%d is an Even number\n",choice);
				else
					printf("%d is an Odd number\n",choice);
				break;
				
			case 4:
				printf("Thanks for using our application......\nWe hope to see you again %c %c %c",2,2,2);
				exit(0);
			
		}
	}
}