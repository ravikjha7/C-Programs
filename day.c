/*Write a program in C to read any day number in integer and display day
name in the word.*/
#include<stdio.h>
int main()
{
	int choice;
	printf("Enter No of the Day:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Sunday\n");
			break;
		case 2:
			printf("Monday\n");
			break;
		case 3:
			printf("Tuesday\n");
			break;
		case 4:
			printf("Wednesday\n");
			break;
		case 5:
			printf("Thursday\n");
			break;
		case 6:
			printf("Friday\n");
			break;
		case 7:
			printf("Saturday\n");
			break;
	}
	return 0;
}