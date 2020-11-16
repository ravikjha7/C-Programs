#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<conio.h>
void main()
{
	int player=0,comp=0,n,turn=3,val;
	char name[20];
	printf("             WELCOME TO ROCK,PAPER,SCISSOR GAME\n\n\n");
	printf("Rules: Choose 0 for Paper, 1 for Scissor, 2 for Rock\n\nPress any key to continue\n\n");
	getch();
	printf("Enter your name:\n");
	gets(name);
	
	while(turn--)
	{
		printf("%s's turn:\n",name);
		scanf("%d",&n);
		printf("Computer's Turn:\n");
		srand(time(NULL));
		val=rand()%2;
		printf("%d\n",val);
		
		if(n==0&&val==1||n==1&&val==2||n==2&&val==0)
		{
			comp++;
			printf("Computer won this round\nComputer:%d\n%s:%d\nPress any key to continue\n",comp,name,player);
			getch();
		}
		else if(val==0&&n==1||val==1&&n==2||val==2&&n==0)
		{
			player++;
			printf("%s won this round\nComputer:%d\n%s:%d\nPress any key to continue\n",name,comp,name,player);
			getch();
		}
		else
		{
			printf("No one won the round\nComputer:%d\n%s:%d\nPress any key to continue\n",comp,name,player);
			turn++;
			getch();
		}
	}
	if(comp>player)
	{
		printf("               Computer won the game by %d:%d\n",comp,player);
	}
	else if(comp<player)
	{
		printf("               %s won the game by %d:%d\n",name,player,comp);
	}
	printf("               Thanks for playing the game %c\n               We wish to see you again\n",2);
	printf("Press any key to exit\n");
	getch();
	
}