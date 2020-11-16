#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	float m;
	main_menu:
	printf("What do you want to convert?\nPress 0 for kms to miles\n1 for inches to foot\n2 for cms to inches\n3 for pound to kgs\n4 for inches to meters\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("Kms:\n");
		scanf("%f",&m);
		printf("Miles:%f\n",0.62137*m);
	}
	else if(n==1)
	{
		printf("Inches:\n");
		scanf("%f",&m);
		printf("Feet:%f\n",0.08333*m);
	}
	else if(n==2)
	{
		printf("cms:\n");
		scanf("%f",&m);
		printf("Inches:%f\n",0.3937*m);
	}
	else if(n==3)
	{
		printf("Pounds:\n");
		scanf("%f",&m);
		printf("Kgs:%f\n",0.4535*m);
	}
	else if(n==4)
	{
		printf("Inches:\n");
		scanf("%f",&m);
		printf("Metres:%f\n",0.0254*m);
	}
	else
	printf("Please Enter Correct Keyboard\n");
	printf("Press any key to continue......\n");
	getch();
	printf("Enter 1 for main menu\nEnter any other number for Exit\n");
	scanf("%d",&n);
	if(n==1)
	goto main_menu;
}