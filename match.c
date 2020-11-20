#include<stdio.h>
#include<conio.h>
void main()
{	game:
	printf("                      WELCOME TO MATCHSTICK GAME:\n\nGame Rules:You Have to pick some number of matchsticks out of 21, Then Computer will pick some mastchsticks\n           Whoever will pick the last matchstick will lose the game\nPress any key to continue......\n");
	getch();
	int n,r=0;
	while(r<20)
	{
		printf("Pick 1 ,2 ,3 ,or 4 matchstick:\n");
		scanf("%d",&n);
		r=r+n;
		printf("%d matchsticks remaining\nPress any key to continue...\n\n",21-r);
		getch();
		
		switch (n)
		{case 1:
			printf("Computer has chosen 4 matchsticks...\n");
			r=r+4;
			printf("%d matchsticks remaining\nPress any key to continue...\n\n",21-r);
			getch();
			break;
			case 2:
			printf("Computer has chosen 3 matchsticks...\n");
			r=r+3;
			printf("%d matchsticks remaining\nPress any key to continue...\n\n",21-r);
			getch();
			break;
			case 3:
			printf("Computer has chosen 2 matchsticks...\n");
			r=r+2;
			printf("%d matchsticks remaining\nPress any key to continue...\n\n",21-r);
			getch();
			break;
			case 4:
			printf("Computer has chosen 1 matchsticks...\n");
			r=r+1;
			printf("%d matchsticks remaining\nPress any key to continue...\n\n",21-r);
			getch();
			break;
		}
	}
		printf("Computer has won the game!!!\n\n");
		printf("Enter 0 to play again or Enter any key to exit\n\n");
		scanf("%d",&n);
		if(n==0)
		{
			goto game;
		}
		else
		{
			printf("Thanks for playing the game\n\nWe wish to see you again %c %c %c\nPress any key to exit......\n",2,2,2);
			getch();
		}
}